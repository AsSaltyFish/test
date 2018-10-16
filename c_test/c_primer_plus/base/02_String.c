#include<stdio.h>
#include<string.h>
/* 字符串的格式化输入和输出
 * strlen()函数：以字符为单位给出字符串的长度，定义在string.h中
 * sizeof()：以字节为单位给出数据大小
 * const 关键字把一个变量声明或转化为常量声明
 */
int main()
{
	// printf 格式化输出，打印百分号需要两个
	// 打印较长字符串可以使用多个printf
	// 	使用反斜线和回车来结束这一行，不过下一行必须从最左边开始，否则缩进
	// 	的空格也会成为字符串的一部分
	// 	用字符串连接
	printf("aaaaaaaaaaaaa\
	afaaaaaaaaaaaaaaaaaaa\
bbbbbbbbbb\n");

}
