#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int linear_search(int * arr, int n, int x){
    for (int i=0;i<n;i++) {
        if(arr[i] == x)
            return i;
    }
    return -1;
}
int binary_serach(int *arr, int n, int x) {
    // creating another array to sort elements in it.
    int b[n], mid;
    int low=0, high=n;
    
    //copy element in new array
    for(int i=0;i<n;i++){
        b[i]=arr[i];
    }
    // sort the array as binary_serach works on sorted array
    sort(b,b+n);
    
    // searching
    while(low<=high) {
        mid = (low + high)/2;
        
        if(x == b[mid])
            return mid;
            
        //cout<<"1";
        if(x > b[mid])
            low = mid+1;
        else
            high = mid-1;
        //cout<<"2";
    }
    return -1;
}

int main()
{
    int arr[] = {2,4,23,1,534,53,4664,34};
    int x = linear_search(arr,sizeof(arr)/sizeof(arr[0]),1);
    cout<<"linear_search"<<x<<endl;
    x = binary_serach(arr, sizeof(arr)/sizeof(arr[0]),53);
    cout<<"binary_serach"<<x<<endl;
    return 0;
}
