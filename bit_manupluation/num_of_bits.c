#include <stdio.h>
int num_of_set_bits(int num) {
	if(num == 0) return 0;
	if((num & 1)==1) {
		return 1+num_of_set_bits(num >> 1);	
	} else {
		return num_of_set_bits(num >> 1);
	}
}

int main() {
	int n = 0xff;
	int res = 0;
	res = num_of_set_bits(n);
	printf("%d\n",res);
	return 0;
}
