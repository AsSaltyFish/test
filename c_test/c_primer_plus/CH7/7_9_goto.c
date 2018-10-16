#include<stdio.h>
// 使用goto可以很方便得跳转，可以实现循环功能
// 但最好不要使用，因为会干扰程序的顺序结构
// 在某种情况下跳出多层循环时可以使用
int main(void)
{
    int a = 0;
    label : printf("%d ",a);
    if (a < 10)
    {
        a++;
        goto label;
    }
    return 0;
}
