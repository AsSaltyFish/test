#include<stdio.h>
// 从标准输入接受一个字符
// 如果输入的字符长度超过一个，则只接受第一个字符
//
int main()
{
	printf("please input a char \n");
	char a = getchar();
	printf("input char is %c\n",a);
}
