#include<stdio.h>
// 打印金字塔
int main()
{
    unsigned int     line;
    unsigned int    i = 0, j = 0; 

    scanf("%u",&line);
    for(i = 1; i <= line; i++ )
    {
        // print space
        for(j = 0; j <= line -i; j++)
        {
            printf(" ");
        }

        // print *
        for(j = 0; j < 2 * i -1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
    
}
