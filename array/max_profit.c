#include <stdio.h>
int main()
{
    int arr[8] = {100,80,120,130,70,60,100,125};
    int profit = 0;
    unsigned int max_profit = 0;
    for(int i=0;i<8;i++){
        if(arr[i]<arr[i+1]) {
            int curr_profit = arr[i+1]-arr[i];
            if(curr_profit > max_profit) {
                max_profit = curr_profit;
            }
        }
    }
    printf("max profit [%d]",max_profit);
    return 0;
}
