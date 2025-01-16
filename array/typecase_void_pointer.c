#include <stdio.h>

int main() {
    int num = 10;
    void *ptr = &num; // Assigning the address of num to a void pointer

    // To access the value, you need to cast the void pointer back to an int pointer
    int * intPtr = (int *)ptr;
    printf("Value: %d\n", *intPtr);
    printf("Dereferenc void point %d",*(int *)ptr);
    return 0;
}
