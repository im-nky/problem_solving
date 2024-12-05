// Write to each byte or memset
#include <stdio.h>
#include <stdint.h>
int main()
{
    int a=10;
    char * ptr;
    ptr = (uint8_t *)&a;
    for(uint8_t i=0;i<=3;i++) {
        *(ptr+i) = 1;
        printf("%d\t",*(ptr+i));
    }
    return 0;
}

#include <stdio.h>
#include <stdint.h>
int main()
{
    int a;
    char * ptr;
    ptr = (uint8_t *)&a;
    *(ptr+0) = 1;
    *(ptr+1) = 4;
    *(ptr+2) = 5;
    *(ptr+3) = 7;
    for(uint8_t i=0;i<=3;i++) {
        printf("%d\t",*(ptr+i));
    }
    return 0;
}
