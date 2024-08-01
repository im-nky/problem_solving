
/* Longest Common Substring: Substring is always continous
*/
# include <bits/stdc++.h>
using namespace std;
# define ma 1000

unordered_set <char> us;

int lcs(string s1,string s2,int m,int n,int count) {
	if(m==0 || n==0) return count;
        if(s1[m-1] == s2[n-1]) {
		us.insert(s1[m-1]);
                count = lcs(s1,s2,m-1,n-1,count+1);
	}
	if(s1[m-1]!=s2[n-1]) {
		count = max(count,max(lcs(s1,s2,m,n-1,0),lcs(s1,s2,m-1,n,0)));
	}
	return count;
}

int main() {
        string s1 = "prayagraj";
        string s2 = s1;
	reverse(s2.begin(),s2.end());
        int t[s1.size()][ma];
        memset(t,-1,sizeof(t));
        cout<<"length of Longest Common Substring is "<<lcs(s1,s2,s1.size(),s2.size(),0)<<endl;
	for(auto it:us)
		cout<<it<<" ";
        return 0;
}
