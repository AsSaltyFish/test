#include<stdio.h>
#include<string.h>

int main()
{
    int a;
    char b[] = "***************************";
    printf("please input a number\n");
    scanf("%d",&a);
    printf("string length is %d\n",strlen(b));

    printf("the meaning of printf's * %d\n",a);
    printf("%-.*s\n",a,b);

    printf("scanf's * test\nplease input three number:");
    scanf("%*d %*d %d",&a);
    printf("%%*d %%*d %%d third input is effective:%d\n",a);
    return 0;
    
}
