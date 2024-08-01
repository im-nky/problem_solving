// An efficient C++ program to find bit-wise & of all
// numbers from x to y.
#include <stdio.h>

// Find position of MSB in n. For example if n = 17,
// then position of MSB is 4. If n = 7, value of MSB
// is 2
int msbPos(int n)
{
	int msb_p = -1;
	while (n)
	{
		n = n>>1;
		msb_p++;
	}
	return msb_p;
}

// Function to find Bit-wise & of all numbers from x
// to y.
int andOperator(int x, int y)
{
	int res = 0; // Initialize result

	while (x && y)
	{
		// Find positions of MSB in x and y
		int msb_p1 = msbPos(x);
		int msb_p2 = msbPos(y);

		// If positions are not same, return
		if (msb_p1 != msb_p2)
			break;

		// Add 2^msb_p1 to result
		int msb_val = (1 << msb_p1);
		res = res + msb_val;

		// subtract 2^msb_p1 from x and y.
		x = x - msb_val;
		y = y - msb_val;
	}

	return res;
}

// Driver code
int main()
{
	int x = 10, y = 15;
	printf("%d",andOperator(x, y));
	return 0;
}
