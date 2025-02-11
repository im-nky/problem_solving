#include <stdio.h>
#include <string.h>

int sub_s(char * str, char * substr);
int main(){
    char * s1 = "Nitin";
    char * s2 = "tin";
    int res = sub_s(s1, s2);
    printf("%d",res);
    return 0;
}

int sub_s(char * str, char * substr){
    int i = 0;
    while( str[i] !='\0') {
        int j = 0;
        while(j<strlen(substr) && str[i+j] == substr[j]) {
            j++;
        }
        if(substr[j] == '\0') {
            return 1;
        }
        i++;
    }
    return 0;
}
