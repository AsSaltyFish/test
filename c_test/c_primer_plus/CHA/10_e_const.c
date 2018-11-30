#include<stdio.h>
// 关键字const的测试
// 常量是只读的，对常量的写操作会编译报错
// 错误提示如下
// assignment of read-only location ‘days[1]’

#define MONTH 12
int main(void)
{
	const int days[MONTH]={31,28,31,30,31,30,31,31,30,31,30,31};
	int i;
	for(i = 0; i < MONTH; i++)
		printf("days[%d] = %d\t&days[%d] = %p\n", i, days[i], i, &days[i]);

	//days[1] = 20;
	//上面一句会编译报错：只读变量（常量）写操作
	//ssignment of read-only location ‘days[1]’
	//printf("days[1] = %d\n",days[1]);

	int * pt;
	pt = days[0];
	*pt = 21;
	// 上面一句会编译警告：指针的方式改变只读变量的值
	// assignment discards ‘const’ qualifier from pointer target type [enabled by default]
	// 运行时会出现段错误：Segmentation fault
	printf("days[1] = %d\n",days[1]);
	return 0;
}
