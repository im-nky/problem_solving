#include <stdio.h>
void main()
{
	char s[10];
	char *b = s;
	size_t ssize = 10;
	getline(&b,&ssize,stdin);
	printf(s);
}
