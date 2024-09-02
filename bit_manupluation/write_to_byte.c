#include <stdio.h>

int main()
{
    int i;
    int a=10;
    char * ptr;
    ptr = (char *)&a;
    for(int i=0;i<=3;i++) {
        printf("%d\t",*ptr++);
    }
    return 0;
}
