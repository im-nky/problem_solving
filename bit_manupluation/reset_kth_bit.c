#include <stdio.h>
#include <stdint.h>

int clearBit(int n, int k)
{
	return (n & (~(1 << (k - 1))));
}

int main()
{
	uint16_t n = 0xffff;
	int k = 3;

	printf("%x\n", clearBit(n, k));

	return 0;
}
