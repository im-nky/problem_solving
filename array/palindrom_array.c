/*Check array is palindrom or not */
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[]={1,2,3,3,2,1};
    int i = 0;
    int j = sizeof(a)/sizeof(a[0])-1;
    while(i<=j) {
        if(a[i]!=a[j]){
            printf("Not Palindrom");
            exit(0);
        }
        else
        {
            i++;
            j--;
        }
    }
    printf("Palindrom");
}
