#include<stdio.h>
// 1 + 1/2 + 1/4 + 1/8的值
// 其中limit为项目个数
// x 为第t_ct项的分母
// time 为前limit项的和

int main()
{
    int     t_ct;
    double  time,x;
    int     limit;

    printf("Enter the number of terms you want:");
    scanf("%d", &limit);
    for(time = 0, t_ct = 1, x = 1; t_ct <= limit; t_ct++,x *= 2.0 )
    {
        time += 1.0/x;
        printf("time = %f when terms = %d\n", time, t_ct);
    }
    return 0;
}
