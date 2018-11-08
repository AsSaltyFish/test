#include<stdio.h>
void swap(int , int);
int main(void)
{
	int a = 5, b = 10;
	printf("a = %d\t&a = %p\n", a, &a);
	printf("b = %d\t&b = %p\n", b, &b);
	swap(a,b);
	printf("a = %d\t&a = %p\n", a, &a);
	printf("b = %d\t&b = %p\n", b, &b);
}

void swap(int a, int b)
{
	int c = a;
	a = b;
	b = c;
	printf("swap a = %d\t&a = %p\n", a, &a);
	printf("swap b = %d\t&b = %p\n", b, &b);
}
