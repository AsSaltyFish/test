#include<stdio.h>
// 斐波拉契数列，第一个和第二个数字都是1 
// 而后续的每个数字是前两个数字的和
// 1 1 2 3 5 8 13 

long fibonacci(int);
int main(void)
{
	int a ;
	if(scanf("%d",&a))
		printf("%d\n",fibonacci(a) );
	return 0;
}

long fibonacci(int n)
{
	if(n > 2)
	{
		printf("n = %d\t &n = %p\n", n, &n);
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
	else
		return 1;
}
