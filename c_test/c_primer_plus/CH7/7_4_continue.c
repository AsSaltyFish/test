#include<stdio.h>
// continue 跳过continue后面的语句进入下一次循环
// for 循环中，只是跳过了循环体中的部分语句，语句二（i <= 10）
// 和语句三（i++）还是会正常执行
int main(void)
{
    char ch;
    do{
        ch = getchar();
        if(ch == '\t')
            continue;
        else 
            putchar(ch);
    } while(ch != '\n');

    int a ;
    for(a = 0; a <= 10; a++)
    {
        if(a != 5)
        {
            printf("%d \n",a);
        } else {
            printf("break a = %d \n",a);
        }
    }



    return 0;
}
