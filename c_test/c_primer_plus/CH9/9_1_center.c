#include<stdio.h>
#include<string.h>
// 这是一个关于函数的测试
// 调用居中显示字符的函数

// 定义函数，如果函数的实现写在main函数前面，可以不写
void center(int line_width, char input[], char ch);

int main()
{
    char a[] = " Hello " ; 
    center(20, a, '*');
    char b[] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    center(20, b, '*');
    return 0;
}

// 函数实现
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
