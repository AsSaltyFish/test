#include<stdio.h>

int main(void)
{
	// 常量字符串
	printf("%s, %p, %c\n", "We", "are", *"space farers");
	
	// 字符串数组及初始化
	const char m1[] = "Limit yourself to one line's worth.";
	
	return 0;
}
