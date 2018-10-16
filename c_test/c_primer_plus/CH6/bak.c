#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
// 一个关于进程的测试代码

int main(void)
{
    if(fork() == 0)
    {
        printf("the child\n");
        if(fork() == 0)
        {
            printf("grandson\n");
            sleep(5);
            printf("done");
            exit(0);

        }
        else
            exit(0);
    }
    else
    {
        wait(NULL);
        printf("the parent\n");
        sleep(10);
    }
    return 0;
}
