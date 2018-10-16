// 编写一个程序，设置一个值为1.0/3.0的double类型变量
// 和一个职位1.0/3/0的float类型变量
// 每个变量的值显示三次，
//      一个在小数点右侧显示4个有效数字
//      一个在小数点右侧显示12个有效数字
//      另一个在小数点右侧显示16个有效数字
//      同时要让程序包含float.h文件，并显示FLT_DIG和DBL_DIG的值
//      1.0/3.0的显示值和这些值一致吗
#include<stdio.h>
#include<float.h>

int main()
{
    float   a = 1.0/3.0;
    double  b = 1.0/3.0;
    printf("float value \t: %.4f\t%.12f\t%.16f\n", a, a, a);
    printf("double value \t: %.4f\t%.12f\t%.16f\n", b, b, b);
    printf("FLT_DIG = %d DBL_DIG = %d \n");
    return 0;
}
