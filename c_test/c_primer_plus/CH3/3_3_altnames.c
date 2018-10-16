#include<stdio.h>
#include<inttypes.h>
int main(void)
{
    int16_t me16;

    me16 = 4593;
    printf("First,assume int16_t is short : me16 = %hd\n",me16);
    //printf("%s",PRID16);    
    //printf("Next ,let's not make any assumptions,\
    instead,use a \"macro\" from initype.h: me16 = %" PRID16 "\n",me16);
    return 0;

}
