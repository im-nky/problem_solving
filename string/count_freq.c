/* 
count frequency of characters in a string
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char * s = "nitinkumaryadav";
    int n = strlen(s);
    int res=0;
    int char_freq[26];
    for(int i=0;i<n;i++) {
        char_freq[s[i]-'a']++;    
    }
    for(int i=0;i<26;i++) {
        printf("%d\n",char_freq[i]);
    }
    
    return 0;
}
