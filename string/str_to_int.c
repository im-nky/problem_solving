#include <stdio.h>
int main()
{
    char * s = "5120";
    int i = 0;
    int num = 0;
    while(s[i]!='\0') {
        num = num*10 + (s[i]-48);
        i++;
    }
    printf("%d",num);
    return 0;
}
