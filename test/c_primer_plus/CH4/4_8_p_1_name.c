#include<stdio.h>
#include<string.h>
// 编写一个程序，要求输入名字和姓氏
// 1 以"名字，姓氏"的格式打印出来
// 2 把名字引在双引号中打印出来
// 3 在宽度为20个字符的左端打印名字，并且整个字段引在引号内
// 4 在比名字宽三个字符的字段内打印
int main()
{
    char fn[10];
    char ln[10];
    
    printf("please input your first name:");
    scanf("%s",fn);
    printf("please input you last name:");
    scanf("%s",ln);
    printf("1\n");
    printf("%s,%s\n\n",fn,ln);
    
    printf("2\n");
    printf("\"%s,%s\"\n\n",fn,ln);
    
    printf("3\n");
    printf("\"%20s,%20s\"\n\n",fn,ln);
    
    printf("4\n");
    printf("%*s,%*s\n\n", (strlen(fn) + 3), fn, (strlen(ln) + 3), ln);
    return 0;
}
