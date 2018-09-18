#include<stdio.h>
// 输入两个数字，求其中较大的数字
int main(void)
{
    int a ,b;
    scanf("%d %d", &a, &b);
    printf("max number in %d and %d is %d\n", a, b, (a > b)? a :b);
    return 0;
}

