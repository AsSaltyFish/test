#include<stdio.h>
// 1.每一级的函数调用都有自己的变量
// 2.每一次函数调用都会有一次返回
// 3.递归函数中，位于递归调用前的语句和各级被调用函数具有相同的顺序
// 4.递归函数中，位于递归调用后的语句执行顺序和各个被调函数的顺序相反
// 5.虽然每一级递归都有自己的变量，但是函数代码并不会得到复制
// 7.递归调用函数中必须包含可以终止递归调用的语句

void up_and_down(int);

int main(void)
{
	up_and_down(1);
	return 0;	
}

void up_and_down(int n)
{
	printf("Level %d : n location %p \n", n, &n);
	if(n < 4)
		up_and_down(n + 1);
	printf("Level %d : n location %p \n", n, &n);
}
