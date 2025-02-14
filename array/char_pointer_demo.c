#include <stdio.h>

void swap(char * s, char * d){
    int i = 0;
    while(s[i]!='\0'){
        *(d+i) = *(s+i);
        i++;
    }
}

int main() {
    char * s = "Nitin";
    char * d;
    swap(s,d);
    printf("%s",d);
    return 0;
}

#if 0   // we have to pass size of array arguments or no way to fix this.
void swap(int * s, int * d){
    int i = 0;
    int n = sizeof(s)/sizeof(s[0]); // give sieze of pointer/2
    printf("%d\n",n);
    while(i < n) {
        *(d+i) = *(s+i);
        i++;
    }
}

int main() {
    int s[] = {5,6,7,8};
    int d[4];
    swap(s,d);
    for(int i=0;i<4;i++) {
        printf("%d",*(d+i));
    }
    return 0;
}
#endif
