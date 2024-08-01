#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	string s = "Nitin Kumar yadav";
	string temp="";
	vector <string> si;
	cout << "++++++++ Using Own Logic +++++++"<<endl;
	for(int i=0;i<s.size();i++){
		if(s[i]==' '){
			//cout << temp<<endl;
			si.push_back(temp);
			temp="";
		}
		else {
			temp=temp+s[i];
		}
	}
	si.push_back(temp);
	cout << si.size()<<endl;
	char str[] = "Yadav Nitin Kumar";
	int count = 0;
	
	cout << "+++++++ Using Strtok +++++++"<<endl;
	char * token = strtok(str," .,");	// Multiple delimiter can be inserted at a time.
	while(token!=NULL) {
		cout<<token<<endl;
		token = strtok(NULL," .,");/* This NULL will be inserted after token to end current token
					    making internally a new pointer for next token search.	
					*/
		count++;
	}
	cout << "wc_count "<<count<<endl;
	return 0;
}
