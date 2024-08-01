#include <stdio.h>
int main()
{
    int res=0;
    int a[]={12,13,12,12};
    for(int i=0;i<32;i++) {
        int ans=0;
        for(int j=0;j<4;j++){
            if(a[j] & (1<<i)){    /* to check ith bit of number j is set or not */
                ans++;              /* this ans has sum of ith bits of all the nums in a[]*/
            }
        }
        if(ans%3==1)
            res += 1<<i;        /* for final ans putting ith bit into result */
    }
    printf("%d",res);
    return 0;
}
