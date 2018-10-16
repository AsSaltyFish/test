// 编写程序 能够产生下面的输出
// For he's a jolly good fellow!
// For he's a jolly good fellow!
// For he's a jolly good fellow!
// Which nobody can deny!
// 要使用两个用户定义的函数，
//      一个用于把上面的夸奖消息输出一次
//      一个用于把最后一行输出一次


#include<stdio.h>
void printgood(void);
void printbad(void);

int main(void)
{
    printgood();
    printbad();
    return 0;
}

void printgood(void)
{
    printf("For he's a jolly good fellow!\n");
    printf("For he's a jolly good fellow!\n");
    printf("For he's a jolly good fellow!\n");
}

void printbad(void)
{
    printf("Which nobody can deny!\n");
}
