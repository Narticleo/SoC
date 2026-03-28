import os
import subprocess
import sys
import time

# 找出path目录下的所有bin文件
def list_binfiles(path):
    files = []
    list_dir = os.walk(path)
    for maindir, subdir, all_file in list_dir:
        for filename in all_file:
            apath = os.path.join(maindir, filename)
            if apath.endswith('.bin'):
                files.append(apath)

    return files

# 主函数
def main():
    bin_files = list_binfiles(r'isa/generated')

    anyfail = False

    cwd ="/home/althea08116/soc/soc/riscv/final_branch_prediction/type_m/mul"
    # 对每一个bin文件进行测试
    errTest = [];
    for file in bin_files:
        cmd = f"{cwd}/obj_dir/Vtest_top {file} 1" 
        f = os.popen(cmd)
        r = f.read()
        f.close()
         #run time of bin file*****
        start_time = time.time()
        result = os.popen(cmd).read()
        end_time = time.time()

        exec_time = end_time - start_time
        if "PASS" in result:
            print(f"{file}    PASS    Time: {exec_time:.4f}s")
        else:
            print(f"{file}    !!!FAIL!!!    Time: {exec_time:.4f}s")
            errTest.append(file)
            anyfail = True
            #break
    if (anyfail == False):
        print('Congratulation, All PASS...')
    else:
        print(errTest, "FAIL")


if __name__ == '__main__':
    sys.exit(main())
