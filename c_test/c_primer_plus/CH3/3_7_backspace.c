// 用各种办法输出回车

#include<stdio.h>
int main()
{
    char a;
    a = '\n';
    printf("\\n\taaa%c",a);
    
    a = 13;
    printf("13\tbbb%c",a);
    
    a = '\015';
    printf("\\015\tccc%c",a);

    a = 0xd;
    printf("0xd\tddd%c",a);
    return 0;
}
