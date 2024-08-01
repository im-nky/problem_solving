#include <bits/stdc++.h>
using namespace std;

void permute(string s,int l,int r){
	if(l==r)
		cout<<s<<endl;
	else {
		for(int i=l;i<=r;i++){
			swap(s[l],s[i]);
			permute(s,l+1,r);
			swap(s[l],s[i]);	// Backtracking
		}
	}
}

int main() {
	string s="ABCD";
	permute(s,0,s.size()-1);
	return 0;
}
