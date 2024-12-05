// C++ implementation to Set bits in
// the given range
#include <iostream>
using namespace std;
 
// function to toggle bits in the given range
int setallbitgivenrange(int n, int l, int r)
{
    // calculating a number 'range' having set
    // bits in the range from l to r and all other
    // bits as 0 (or unset).
    cout << "\nnumber made by shifting left" << ((1 << (l - 1)) - 1);
    cout << "\nnumber made by shifting Right" << ((1 << (r)) - 1)<<endl;

    int range = (((1 << (l - 1)) - 1) ^    
                ((1 << (r)) - 1));
 
    //int reset = n ^ range;  // ATTENSION: Specail Case :for restting first toggle then take & with original number
    //return n & range;  // to reset bits in a range
    
    //return (n ^ range); // to toggle bits in a range
    return (n | range);
}
 
// Driver code
int main()
{
    int n = 17, l = 2, r = 3;
    cout << setallbitgivenrange(n, l, r);
    return 0;
}
