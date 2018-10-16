// 将用分钟表示的时间转换成以小时和分钟表示的时间
// 使用#define 或者const 来创建一个代表60的符号常量
// 使用while循环来允许用户重复键入值
//  并且当键入一个小于等于0的时间终止循环

#include<stdio.h>
#define PER_HOUR 60
int main()
{
    int     min;
    scanf("%d", &min);
   
    while(min > 0)
    {
        printf("%d hours %d minute\n", min/PER_HOUR, min%PER_HOUR);
        scanf("%d", &min);
    }
    return 0;
}
