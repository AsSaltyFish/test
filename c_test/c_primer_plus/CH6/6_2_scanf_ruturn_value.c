// scanf按照给定的格式读取字符
// 返回成功读取的项目个数
// 如果读取不成功则返回0
#include<stdio.h>
int main()
{
    double a;
    int b = scanf("%ilf",&a);
    printf("%d",b);
    return 0;
}
