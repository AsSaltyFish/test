#include<stdio.h>

int main()
{
    char ch;
    printf("please input a char :");
    scanf("%c",&ch);
    printf("ch = %c\n",ch);

    printf("please input a char start with space :");
    scanf(" %c",&ch);
    printf("ch = %c\n",ch);
    
    printf("EOF = %d\n",EOF);

    return 0;
}
