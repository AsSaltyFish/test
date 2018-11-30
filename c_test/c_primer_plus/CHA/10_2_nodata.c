#include<stdio.h>
#define SIZE 4
int main(void)
{
	int nodata[SIZE];
	int i;

	printf("%2s%14s\n", "i", "nodata[i]");
	for(i = 0; i < SIZE; i++)
		printf("%2d%14d\n", i, nodata[i]);
	return 0;
}
