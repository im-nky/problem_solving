/* Total profit earned by a person */
#include <stdio.h>
int main()
{
    int arr[8] = {100,80,120,130,70,60,100,125};
    int profit = 0;
    for(int i=0;i<8;i++) {
        if(arr[i] < arr[i+1]) {
            profit += arr[i+1]-arr[i];
        }
    }
    printf("total_profit [%d]",profit);
    return 0;
}
