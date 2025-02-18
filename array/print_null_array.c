#include <stdio.h>

int main() {
    int * a = NULL;
    char * s = NULL;
    printf("%d\n", *a); // prints nothing
    printf("%p\n", a); // prints NULL
    printf("%p\n", s);  // prints null
    printf("%s\n", s);    // nothing
    printf("%c\n", *s);
    return 0;
}
