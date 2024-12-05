/* Count total set bits in a number */

#include <stdio.h>

int main()
{
    int n = 31;
    int count = 0;
    while(n!=0){
        n = n & n-1;
        count++;
    }
    printf("%d",count);
}
