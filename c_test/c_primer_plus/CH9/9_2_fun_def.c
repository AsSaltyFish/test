#include<stdio.h>

// 函数类型的声明
// 可以省略函数参数名列表，只给定函数参数列表对应的类型
int add(int, int, int);

int main()
{
	int a, b, c;
	printf("please input three number :");
	scanf(" %d %d %d", &a, &b, &c);
	printf("%d + %d + %d = %d\n", a, b, c, add(a, b, c));
	return 0;
}

// 计算三个整数的和
// 函数参数名列表和函数参数类型列表可以不放置在中括号中
// 函数参数名列表位于中括号
// 函数参数类型的定义位于中括号和大括号之间

int add(a, b, c)
int a, b, c;
{
	return a + b + c;
}
