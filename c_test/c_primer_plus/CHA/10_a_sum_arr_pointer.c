#include<stdio.h>
#define SIZE 10
// 可以将数组的起始地址和结束地址作为参数传入
// 注意其中的marbles + SIZE 和 start < end

int sump(int * start, int * end);

int main(void)
{
	int marbles[SIZE] = {1,2,3,4,5,6,7,8,9,0};
	long answer;

	answer = sump(marbles, marbles + SIZE);
	printf("The total number of marbles is %ld.\n", answer);
	return 0;
}

int sump(int * start, int * end)
{
	int total = 0;
	while(start < end)
	{
		total += *start;
		start++;
		// total += *start++;
	}
	return total;
}
