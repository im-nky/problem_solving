#include <stdio.h>
#include <stdint.h>
 
int setallbitgivenrange(int n, int l, int r)
{
    uint32_t range = (((1 << (l - 1)) - 1) ^    
                ((1 << (r)) - 1));
 
    uint32_t reset = n ^ range;  // Specail Case :for restting first toggle then take & with original number
    return n & reset;  // to reset bits in a range
}

int main()
{
    uint32_t n = 0xdeadbeef;
    int l = 5, r = 8;
    uint32_t reset_num = setallbitgivenrange(n, l, r);
    uint32_t new_num = 0x9;
    uint32_t shift_num = new_num << (l-1);
    printf("\n%x",reset_num | shift_num);
    return 0;
}
