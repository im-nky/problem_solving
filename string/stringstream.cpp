#include <bits/stdc++.h>
using namespace std;
void removeDupWord(string str)
{
	stringstream ss(str);
	set <string> s;
	string word; 
	while (ss >> word) 
	{
		s.insert(word);
		//cout << word << "\n";
	}
	for(auto it:s)
		cout<<it<<endl;
}

int main()
{
	string str = "Geeks for Geeks";
	removeDupWord(str);
	return 0;
}
