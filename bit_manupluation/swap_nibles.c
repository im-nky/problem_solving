/* Swap Nibbles */
#include <stdio.h>
#include <stdlib.h>

int swap_nibbles(int num);
void main(){
	int num = 9;
	int res = swap_nibbles(9);
	printf("\nBefore Swap [%d] -> After Swap [%d]\n",num,res);
}

int swap_nibbles(int num){
	int l = num & 0xf0;
	int r = num & 0x0f;
	l = l>>4;
	r = r<<4;
	return(l|r);
}
