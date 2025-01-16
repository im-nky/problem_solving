/* Reverse string using XOR operation.
   Note: we are using pointers as char string is immutable
*/
#include <stdio.h>
#include <string.h>

// Driver Code 
int main() 
{ 
	char s[] = "GeeksforGeeks"; 
	char * start = s;
	char * end = s+strlen(s)-1;
	
	while (start < end) 
	{ 
		// XOR for swapping the variable 
		*start ^= *end; 
		*end ^= *start; 
		*start ^= *end; 

		++start; 
		--end; 
	}
	printf("reverse string is [%s]",s); 
	return 0; 
} 
