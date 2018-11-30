#include<stdio.h>

int main(void)
{
	int arr[2][3]={{1,2,3},{4,5,6}};
	int i,j;
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 3; j++ )
			printf("arr[%d][%d] = %d,  %p\t", i, j, arr[i][j], &arr[i][j]);
		printf("\n");
	}
	printf("\n&arr[0][0] = %p, &arr = %p\n", &arr[0][0], &arr);
	return 0;
}
