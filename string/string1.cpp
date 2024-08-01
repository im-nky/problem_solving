// Type casting in c++
// using ascii values of characters

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main ()
{
    string str;
	char s = 'a';    
    int i, sum = 0; 
    cout << "Enter a string : ";
    cin>>str;
    for (i = 0; str[i] != '\0'; i++)
	cout << str[i]<< "->"  << int(str[i]) << endl;    
    
    cout << char(109) << endl;
    cout << int(s) << endl;
    return 0;
}

