// 输入一个整数，然后打印出从（包括）输入的值（包括）
// 比输入的值大10的所有整数，（如果是4，输出4到14）的所有整数
// 要求在各个输入之间用空格
#include<stdio.h>
int main()
{
    int a;
    scanf(" %d", &a);
    int count = 11;
    while(count--)
    {
        printf("%d ",a++);
    }
    printf("\n");
    return 0;
}
