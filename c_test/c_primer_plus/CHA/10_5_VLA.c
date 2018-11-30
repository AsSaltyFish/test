#include<stdio.h>

int main(void)
{
	int SIZE = 4;
	int arr[SIZE];
	int i;

	for(i = -1; i <= SIZE; i++)
		arr[i] = 2 * i + 1;
	
	for(i = -1; i < 7; i++)
		printf("%2d\t%d\n", i, arr[i]);

	return 0;
	
}
