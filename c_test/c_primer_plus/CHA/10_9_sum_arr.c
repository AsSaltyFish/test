#include<stdio.h>
#define SIZE 10
// 使用数组和指针利用索引的方式取得数组元素

int sum(int ar[], int n);

int main(void)
{
	int marbles[SIZE] = {1,2,3,4,5,6,7,8,9,0};
	long answer;
	answer = sum(marbles,SIZE);
	printf("The total number of marbes is %ld.\n", answer);
	printf("The size of marbes is %zd bytes.\n", sizeof marbles);
	return 0;
}

int sum(int ar[], int n)
{
	int i;
	int total = 0;
	for(i = 0; i < SIZE; i++)
		total += ar[i];
	printf("The size of ar is %zd bytes.\n", sizeof ar);
	printf("&ar = %p \n", ar);
	return total;
}
