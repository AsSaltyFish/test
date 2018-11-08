#include<stdio.h>
void mikado(int);

int main(void)
{
	int pooh = 2, bah = 5;
	printf("main\tpooh = %d\t&pooh = %p\n", pooh, &pooh);
	printf("main\tbah = %d\t&bah = %p\n", bah, &bah);
	mikado(pooh);
	return 0;
}

void mikado(int bah)
{
	int pooh = 10;
	printf("mikado\tpooh = %d\t&pooh = %p\n", pooh, &pooh);
	printf("mikado\tbah = %d\t&bah = %p\n", bah, &bah);
}
