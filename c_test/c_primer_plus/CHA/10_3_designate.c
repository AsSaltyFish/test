#include<stdio.h>
#define MONTH 12
int main(void)
{
	int days[MONTH] = {31,28,[4] = 31,30,31,[1]=29};
	int i;
	for(i = 0; i < sizeof days / sizeof days[0]; i++)
		printf("%d %d\n", i + 1, days[i]);
	return 0;
}

