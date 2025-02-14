#include <stdio.h>

int main() {
    int * a = NULL;  
    printf("%d\n", *a); // prints nothing
    printf("%p\n", a); // prints NULL
    return 0;
}
