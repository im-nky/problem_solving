#include <stdio.h>

int main()
{
    int arr[] = {2,1,2,4,4,3,3};
    int i=0;
    int xor=0;
    int n = sizeof(arr)/sizeof(arr[0]);
    while(i<n) {
        xor=xor^arr[i];
        i++;
    }
    printf("%d",xor);
    return 0;
}
