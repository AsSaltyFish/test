#include<stdio.h>
// 关键字const的测试
// 将指针设置为const类型则只能移动指针指向元素的位置
// 而不能通过指针修改元素的值

#define MONTH 12
int main(void)
{
	// 第二个测试：指针设置const属性
	double rates[5] = {11.2, 34.4, 12.3, 456.4,34.2};
	const double * pd = rates;
	int i;
	for(i = 0; i < 5; i++)
		printf("rates[%d] = %f\t&rates[%d] = %p\n", i, rates[i], i, &rates[i]);
	printf("*pd = %f\tpd = %p\t&pd = %p\n", *pd, pd, &pd);

	pd++;
	printf("*pd = %f\tpd = %p\t&pd = %p\n", *pd, pd, &pd);

	//* pd = 212.3;    
	//不允许
	// assignment of read-only location ‘*pd’
	
	//pd[2] = 222.3;   
	//不允许
	//assignment of read-only location ‘*(pd + 16u)’
	//将数组pd[2] 转化为*(pd + 2 * (sizeof double))
	printf("sizeof(double) = %zu\n", sizeof(double));
	rates[0] = 99.99; //允许，因为rates不是常量
	return 0;
}
