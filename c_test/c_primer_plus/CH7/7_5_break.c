#include<stdio.h>
// break 终止当前一层循环
// for循环中，break直接跳出整个循环，而不会执行语句三（a++）
int main(void)
{
    int a = 0;
    for(a = 0; a <= 10; a++)
    {
        if(a == 5)
        {
            printf("%d ",a);
            break;
        }
        else 
            printf("%d ",a);
    }
    printf("last a = %d\n",a);
    return 0;
}

