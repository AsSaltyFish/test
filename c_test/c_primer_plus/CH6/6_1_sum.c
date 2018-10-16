#include<stdio.h>
// 从标准输入不断读取一个数字，进行加法运算
// 如果读取不成功则输出输入数字的和

int main()
{
    double count = 0L;
    double a;
    int status = 0;
    printf("please input number to add\nif it is not a sum,quit\n");
    printf("input number:");
    status = scanf(" %lf", &a);
    while(status == 1)
    {
        printf("input number:");
        count += a;
        status = scanf(" %lf", &a);
    }
    printf("count = %f\n",count);
    return 0;
}
