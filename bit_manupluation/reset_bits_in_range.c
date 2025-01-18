#include <stdio.h>
#include <stdint.h>
 
int setallbitgivenrange(int n, int l, int r)
{
    uint16_t range = (((1 << (l - 1)) - 1) ^    
                ((1 << (r)) - 1));
 
    uint16_t reset = n ^ range;  // Specail Case :for restting first toggle then take & with original number
    return n & reset;  // to reset bits in a range
}
 
// Driver code
int main()
{
    uint16_t n = 0xffff;
    int l = 5, r = 8;
    printf("%x",setallbitgivenrange(n, l, r));
    return 0;
}
