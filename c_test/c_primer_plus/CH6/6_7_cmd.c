#include<stdio.h>
#include<string.h>

int main()
{
    char    user[100];
    char    pass[100];
    do
    {
        printf("localhost login:");
        scanf("%s",user);
    } while(strlen(user) < 5 );
    
    do
    {
        printf("[root@localhost ~]#");
        scanf("%s",pass);
    } while("exit" != pass);
    return 0;
}
