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
