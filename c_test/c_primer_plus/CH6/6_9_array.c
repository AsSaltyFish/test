#include<stdio.h>
// scanf 读取字符串到数组中，返回值
// 是读取的字符串的个数，而不是字符的个数
int main()
{
    char    a[4] = {0};
    int     i;
    int     c = scanf("%s",a);
    for(i = 0; i < 4; i++)
    {
        printf("a[%d] = %c\n", i, a[i]);
    }
    printf("sizeof(char a[4]) = %zd\n", sizeof(a));
    printf("input count is %d\n",c);
    return 0;
}
