#include<stdio.h>
int main()
{
    // 输出8进制的数字
    int a = 100;
    printf("dec = %d,\toctal = %o,\thex = %#o\n",a,a,a);
    printf("dec = %d,\toctal = %x,\thex = %#x\n",a,a,a);

    char c = '?';
    printf("show ? %c\n",c);

    _Bool f = 1;
    printf("%d\n",f);

    return 0;
}
