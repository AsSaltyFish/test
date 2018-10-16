#include<stdio.h>

int main()
{
    float   a = .2;
    printf("a = %f\n",a);

    double c,d;
    d = 2.0e20 + 1.0;
    c = d - 2.0e20;
    printf("%e\n",c);
    return 0;
}
