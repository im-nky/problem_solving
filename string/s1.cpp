#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool myfunction(string i,string j)
{
	return(i>j);
}
int main()
{
	vector<string> s3={"this","is","raman","hostel"};
	vector<string>::iterator it;
	
	sort(s3.rbegin(),s3.rend());
	
	for(int i=0;i<s3.size();i++)
	{
		cout<<"\n"<<s3[i]<<endl;	
	}

	cout<<endl<<"Decreasing Order"<<endl;		
	
	sort(s3.begin(),s3.end(),myfunction);
	
	for(it=s3.begin();it!=s3.end();++it)
	{
		cout<<"\n"<<*it<<endl;	
	}
	return 0;
}
