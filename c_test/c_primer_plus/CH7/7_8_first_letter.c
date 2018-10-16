#include<stdio.h>
int main(void)
{
    while(1)
    {
	    while(getchar() == '\n')
	        printf("lase letter %c\n",getchar());
    }
    return 0;
}

