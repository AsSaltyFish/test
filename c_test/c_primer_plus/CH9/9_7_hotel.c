#include<stdio.h>
#include "9_7_hotel.h"
int menu()
{
	int code, status;
	printf("\n%s%s\n",STARS,STARS);
	printf("Enter the number of the desired hotel:\n");
	printf("1) Fairfield Arms \n2) Hotel Olympic \n3) Chertworthy Plaza\n4) The stockton\n");
	printf("5) QUIT\n");
	printf("%s%s\n", STARS, STARS);

	while((status = scanf("%d", &code)) != 1 || (code < 1 || code > 5))
	{
		if(status != 1)
			scanf("%*s");
		printf("Enter an integer form 1 to 5 , please.\n");
	}
	return code;
}

int getnights()
{
	int nights;
	printf("How many nights are needs? ");
	while(scanf("%d", &nights) != 1)
	{
		scanf("%*s");
		printf("Please enter an interger ,such as 2 . \n");
	}
	return nights;
}

void showprice(double rate,int nights)
{
	int n;
	double total = 0.0;
	double factor = 1.0;
	for(n = 1; n <= nights; n++, factor *= DISCOUNT)
		total += rate * factor;
	printf("The total coat will be $%0.2f.\n",total);
}
