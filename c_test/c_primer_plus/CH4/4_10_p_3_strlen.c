// 编写一个程序，首先要求用户输入名字，然后输入姓氏
// 在一行打印输入的姓名 在下一行打印每个名字中的字母个数
// 把数字个数与相应的名字的结尾对其
// 如
// melissa honeybee
//       7        8
// 然后打印相同的信息，但是单词字母个数与相应的开始对齐
#include<stdio.h>
#include<string.h>

int main()
{
    char fn[20];
    char ln[20];
    printf("please input your first name\t:");
    scanf("%s",fn);
    printf("please input your last name\t:");
    scanf("%s",ln);

    printf("%s %s\n%*d %*d\n\n", fn, ln, strlen(fn), strlen(fn), strlen(ln), strlen(ln));
    printf("%s %s\n%-*d %-*d\n", fn, ln, strlen(fn), strlen(fn), strlen(ln), strlen(ln));
    return 0;
}
