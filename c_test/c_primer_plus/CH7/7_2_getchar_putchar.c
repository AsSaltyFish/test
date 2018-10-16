#include<stdio.h>
// 从键盘读入一行字符并显示在屏幕上

int main(void)
{
    char ch;
    while( (ch = getchar()) != '\n')
        putchar(ch);
    putchar('\n');
    return 0;
}
