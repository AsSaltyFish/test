#include<stdio.h>

long long fact(int n);
long long rfact(int n);

int main(void)
{
	int level;
	if(scanf(" %d", &level))
	{
		printf("fact %d! = %lld\n", level, fact(level));
		printf("rfact %d! = %lld\n", level, rfact(level));
	}
	return 0;
}

long long fact(int n)
{
	long long rtn;
	for(rtn = 1; n > 0; n--)
		rtn *= n;
	return rtn;
}

long long rfact(int n)
{
	long long rtn = 1;
	if( n > 0){
		rtn =  n * rfact(n - 1);
		printf("%lld \n",rtn);}
	else
		rtn = 1;
	return rtn;
}
