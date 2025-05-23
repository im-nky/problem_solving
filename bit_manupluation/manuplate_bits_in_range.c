#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t num = 8;
    int l = 5;
    int r = 8;
    // here indexing is 1th position based.
    uint8_t mask = ((1<<(r-l+1))-1)<<(l-1);
    printf("mask %x\n", mask);
    printf("set bits %x\n",num | mask);
    printf("reset bits %x\n",num & ~mask);
    printf("toggle bits %x\n",num ^ mask);
}
/*
  mask = ((1<<(r-l+1))-1)<<(l-1)
  move 1 by (r-l+1) times
  take 1's compliment
  then move this number (l-1) times
*/
