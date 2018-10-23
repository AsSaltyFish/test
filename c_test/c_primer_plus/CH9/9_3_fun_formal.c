#include<stdio.h>

int add(int a , int b)
{
	printf("formal a = %d, b = %d\n",a,b);
	printf("address a = %p, b = %p\n",&a,&b);
	return a + b;
}

int main()
{
	int a , b, c;
	c = add(a,b);
	printf("formal a = %d, b = %d, c = %d\n", a, b, c);
	printf("address a = %p, b = %p, c = %p\n", &a, &b, &c);
	return 0;
}

