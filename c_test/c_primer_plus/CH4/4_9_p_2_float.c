#include<stdio.h>
// 阿虎如一个浮点数，首先以小数点计数法，然后以指数计数法打印
int main()
{
    float a;
    printf("please input a float number:");
    scanf("%f",&a);
    printf("a = %f,\ta =% e,\t a = %E\n",a, a, a);
    printf("a = %+f,\ta = %+e,\t a = %+E\n",a, a, a);
    //printf("a = %G,\ta = %")
    return 0;
}
