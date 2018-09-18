#include<stdio.h>
#include<ctype.h>

int main()
{
    char ch;
    while( scanf("%c",&ch) && ch != '\n' )
    {   
        printf("isalnum(\'%c\')\t = %d\n", ch, (int)isalnum(ch));
        printf("isalpha(\'%c\')\t = %d\n", ch, (int)isalpha(ch));
        printf("isblank(\'%c\')\t = %d\n", ch, (int)isblank(ch));
        printf("iscntrl(\'%c\')\t = %d\n", ch, (int)iscntrl(ch));
        printf("isdigit(\'%c\')\t = %d\n", ch, (int)isdigit(ch));
        printf("isgraph(\'%c\')\t = %d\n", ch, (int)isgraph(ch));
        printf("islower(\'%c\')\t = %d\n", ch, (int)islower(ch));
        printf("isprint(\'%c\')\t = %d\n", ch, (int)isprint(ch));
        printf("ispunct(\'%c\')\t = %d\n", ch, (int)ispunct(ch));
        printf("isspace(\'%c\')\t = %d\n", ch, (int)isspace(ch));
        printf("isupper(\'%c\')\t = %d\n", ch, (int)isupper(ch));
        printf("isxdigit(\'%c\')\t = %d\n", ch, (int)isxdigit(ch));
    }
    return 0;
}

