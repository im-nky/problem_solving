// write your own size of in C

#include <stdio.h>
# define my_sizeof1(x) (char*)(&x+1) - (char*)(&x)

int main()
{
    int arr[5];
    int my_sizeof = (char *)(&arr+1)-(char *)(&arr);
    printf("%d\n",my_sizeof);
    printf("%ld\n",my_sizeof1(arr));
    return 0;
}
