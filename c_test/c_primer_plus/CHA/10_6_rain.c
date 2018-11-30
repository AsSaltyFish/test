#include<stdio.h>
#define MONTH 12
#define YEARS 5 
int main(void)
{
	const float rain[YEARS][MONTH] ={
	{4.3,4.5,0.2,2.3,4.5,23.4,44.3,343.3,34.5,22.4,22.3,0.1},
	{4.3,4.5,0.2,2.3,4.5,23.4,44.3,343.3,34.5,22.4,22.3,0.1},
	{4.3,4.5,0.2,2.3,4.5,23.4,44.3,343.3,34.5,22.4,22.3,0.1},
	{4.3,4.5,0.2,2.3,4.5,23.4,44.3,343.3,34.5,22.4,22.3,0.1},
	{4.3,4.5,0.2,2.3,4.5,23.4,44.3,343.3,34.5,22.4,22.3,0.1},
	};
	int year, month;
	float subtot,total;
	
	printf("Year rainFall (inches)\n");
	for(year = 0, total = 0; year < YEARS; year++)
	{
		for(month = 0, subtot = 0; month < MONTH; month++)
			subtot += rain[year][month];
		printf("%5d %15.1f\n",2000 + year, subtot);
		total += subtot;
	}
	printf("\nThe yearly average is %.1f inches.\n\n",total/YEARS);
	printf("Monthly averages: \n\n");

	for(month = 0; month < MONTH; month++)
	{
		for(year = 0, subtot = 0; year < YEARS; year++)
			subtot += rain[year][month];
		printf("%4.1f ",subtot/YEARS);
	}
	printf("\n");
	return 0 ;
}
