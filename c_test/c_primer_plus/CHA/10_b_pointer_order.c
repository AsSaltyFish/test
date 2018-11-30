#include<stdio.h>
// 只有*(p3)++有改变数组元素的值，别的都是移动指针

int data[2] = {100,200};
int moredata[2] = {300,400};

int main(void)
{
	int * p1, * p2, * p3;

	p1 = p2 = data;
	p3 = moredata;
	printf("* p1 = %d\t * p2 = %d\t * p3 = %d\n", *p1, *p2, *p3);
	printf("* p1++ = %d\t * ++p2 = %d\t (* p3)++ = %d\n", *p1++, *++p2, (*p3)++);
	printf("* p1 = %d\t * p2 = %d\t * p3 = %d\n", *p1, *p2, *p3);
	return 0;
}
