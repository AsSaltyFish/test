// 获取键盘输入并且输出来


#include<stdio.h>
int main(void)
{
    int     a;
    float   b;
    char    c;
    printf("please input a int value\n");
    scanf("%d",&a);
    printf("inputed int value is %d\n",a);
    printf("----------------------------\n\n");

    printf("please input a float value\n");
    scanf("%f",&b);
    printf("inputed float float is %f\n",b);
    printf("----------------------------\n\n");
    
    printf("please input a char value\n");
    scanf("%c",&c);
    printf("inputed char value is %c\n",c);
    printf("----------------------------\n\n");

    printf("please input a value\n");
    scanf("%f",&b);
    printf("inputed  value is %d\n",a);
    printf("----------------------------\n\n");
    return 0;
}
