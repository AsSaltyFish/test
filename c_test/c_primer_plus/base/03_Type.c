#include<stdio.h>
#include<string.h>
/* int 类型的变量在C中占用四个字节
 * double类型的变量在C中占用四个字节
 * char 类型的变量在C中占用一个字节
 * char[] 也就是string类型的数据最后是一个'\0'空字符
 * sizeof(string) 和strlen(string)结果不同
 *	sizeof是字符串所有字符个数包括末尾的空字符
 *	strlen是字符个数，不包括末尾的空字符
 */

int main()
{
	int	a;
	double	b;
	float	c;
	char	d='a';
	char	f[]="a";
	printf("int size %d\n",sizeof(a));
	printf("double size %d\n",sizeof(b));
	printf("float size %d\n",sizeof(c));
	printf("char %c size %d\n",d,sizeof(d));
	printf("string %s size %d\n",f,sizeof(f));
	printf("string %s size %d\n",f,strlen(f));
}

