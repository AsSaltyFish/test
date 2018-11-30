#include<stdio.h>
int sum(int arr[] ,int);

int main(void)
{
	int size = 4;
	int arr[4];
	int i;
	int total; 

	for(i = 0; i < size; i++)
		scanf(" %d", &arr[i]);
	
	total = sum(arr, size);
	
	printf("total = %d\n",total);
	return 0;
}

int sum(int arr[], int size)
{
	int i; 
	int total = 0;
	for(i = 0; i < size; i++)
		total += arr[i];
	return total;
}
