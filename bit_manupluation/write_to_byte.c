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

int main()
{
    int a[2]; // index of array starts with 0 but size starts with 1
    char * ptr;
    ptr = (uint8_t *)&a;
    *(ptr+0) = 1;
    *(ptr+1) = 4;
    *(ptr+2) = 5;
    *(ptr+3) = 7;
    *(ptr+4) = 9;
    *(ptr+5) = 10;
    *(ptr+6) = 11;
    *(ptr+7) = 12;
    for(uint8_t i=0;i<=7;i++) {
        printf("%d\t",*(ptr+i));
    }
    return 0;
}
