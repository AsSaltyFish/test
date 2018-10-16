#include<stdio.h>
// 如果没有break，case入口之后的语句都将被执行

int main(void)
{
    int a;
    while(scanf("%d",&a))
    {
	    switch(a)
	    {
	        case 1: printf("1");
	        case 2: printf("2");
	        case 3: printf("3");
	        case 4: printf("4");
	        default:printf("*");
	    }
        printf("\n");
    }
    return 0;
}
