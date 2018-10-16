// 输入的字符越界之后，会发生段错误
// 注意在编程的时候避免这种错误

#include<stdio.h>
#include<string.h>

int main()
{
    char name[5];
    scanf("%s",name);
    printf("name is %s\n", name);
    printf("strlen is %4d\n",strlen(name));
    return 0;
}

