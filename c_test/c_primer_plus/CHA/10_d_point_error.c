#include<stdio.h>
// 将值赋给未初始化的指针，会产生段错误

int main(void)
{
	int * pt;
	*pt = 5;
	printf("&pt = %p,*pt = %d\n", *pt, pt);

	// int * ptr;
	// printf("&ptr = %p,*ptr = %d\n", ptr, *ptr);
	return 0;
}
