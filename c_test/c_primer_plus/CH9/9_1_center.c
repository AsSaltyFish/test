#include<stdio.h>
#include<string.h>


void center(int line_width, char input[], char ch);

int main()
{
    char a[] = " Hello " ; 
    center(20, a, '*');
    char b[] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    center(20, b, '*');
    return 0;
}

void center(int line_width, char input[], char ch)
{
    if(strlen(input) >= line_width)
    {
        printf("%s\n",input);
    } else {
        int i = 0;

        // print before char
        for(i = 0; i < (line_width - strlen(input)) /2; i ++)
        {
            printf("%c",ch);
        }

        // print string
        printf("%s",input);

        // print after char
        for(i = 0; i < (line_width - strlen(input)) /2; i ++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }

}
