module pipe_ctrl(
    input wire rst_i,
 
    // input wire  stallreq_from_if_i,  //waiting ROM delay
    input wire stallreq_from_id_i,  //load hazard 
    input wire stallreq_from_exe_i,  //jump hazard 
    input wire jump_en_i,
    input wire is_jump_i, //from id prediction****************
    input wire[`ADDR_WIDTH-1:0] jump_addr_i,
    input wire[`ADDR_WIDTH-1:0] jump_addr_pred_i,
    input wire branch_predict_fail_i,  // 添加分支预测失败信号

    /* ---signals to other stages of the pipeline  ----*/
    output reg[5:0] stall_o,   // stall request to PC,IF_ID, ID_EXE, EXE_MEM, MEM_WB， one bit for one stage respectively
    output reg flush_jump_o, //flush IF_ID, ID_EXE
    output reg branch_fail_flush_jump_o,  // to if_id flush predicted inst
    output reg branch_succes_flush_jump_o, // to id_exe flush next inst
    output reg[`ADDR_WIDTH-1:0] new_pc_o     // change pc
);

    assign flush_jump_o = jump_en_i ; // 如果跳转使能或分支预测失败，则需要刷新 jump_en only for jalr 
    assign branch_fail_flush_jump_o = branch_predict_fail_i;
    assign branch_succes_flush_jump_o = ~branch_predict_fail_i;


    always @ (*) begin
        if (jump_en_i || branch_predict_fail_i) begin
            new_pc_o = jump_addr_i;  // 跳转地址由分支预测失败或跳转使能提供 jalr(rs1+imm) 、branch fail: pc + 8 
        end
        else if (is_jump_i) begin
            new_pc_o = jump_addr_pred_i;
            flush_jump_o = 1'b0;
        end else begin
            new_pc_o = `ZERO;  // 如果没有跳转或预测失败，PC保持不变
        end
    end

    always @ (*) begin
        if (rst_i == 1'b1) begin
            stall_o = 6'b000000;
        end else if (stallreq_from_exe_i == `STOP) begin
            stall_o = 6'b001111;  // 如果来自执行阶段的暂停请求，停掉PC、IF_ID、ID_EXE、EXE_MEM
        end else if (stallreq_from_id_i == `STOP) begin
            stall_o = 6'b000111;  // 如果来自ID阶段的暂停请求，停掉PC、IF_ID、ID_EXE
        end else if (branch_predict_fail_i == 1'b1) begin
            stall_o = 6'b001111;  // 如果分支预测失败，停掉PC、IF_ID、ID_EXE、EXE_MEM
        end else begin
            stall_o = 6'b000000;  // 没有暂停请求，继续正常执行
        end
    end

endmodule