#include<stdio.h>
int main()
{
    printf("int size %lu\n",sizeof(int));
    printf("short size %lu\n",sizeof(short));
    printf("long size %lu\n",sizeof(long));
    printf("long long  size %lu\n\n",sizeof(long long));
    
    printf("double size %lu\n",sizeof(double));
    printf("float size %lu\n",sizeof(float));
    printf("long double size %lu\n\n",sizeof(long double));
    
    printf("_Bool size %lu\n\n",sizeof(_Bool));
    
    printf("char size %lu\n",sizeof(char));

    //printf("_Complex size %lu\n\n",sizeof(_Complex));
    //printf("_Imaginary size %lu\n\n",sizeof(_Imaginary));
    return 0; 
}
