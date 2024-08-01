#include <stdio.h>
int main()
{
    int num = 9;
    int res = 0;
    for(int i=0;i<15;i++) {     // iterate over lsb to msb
	    int lsb = num & 1;          // finding lsb bit of num
	    int rev_lsb = lsb << 15-i;   // moving lsb to RSB side tp swap with left side 
	    res = res | rev_lsb;             // ORing  lsb to result
	    num = num >> 1;             // making right shift of num to find next set bit
    }
    printf("%d",res);
    return 0;
}
