//String ,substring,swapping and finding

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	// Substring	
	string s1("I can do it");
	cout<<s1.substr(11,4)<<endl; 	
	
	//swaping
	string s2("Apples");
	string s3("Beans");
	
	cout<<s2<<s3<<endl;
	
	s2.swap(s3);
	cout<<s2<<s3<<endl;
	s3.swap(s2);
	cout<<s2<<s3<<endl; 
	
	//Finding
	
	string s4("TFCC is Running");
	cout<<s4.find("TFCC")<<endl;	//gives location of first occurence
	cout<<s4.rfind("TFCC")<<endl;	// gives location last occurence 
	
	//Concatenation: +
	string first;
	cout<<"\nEnter First Name \n";
	
	//for entire line : getline(cin,variable);
	getline(cin,first);
	cout<<first.size();

	string last;
	cout<<"\nEnter last Name \n";
	cin>>last;
	cout<<last.length();
	
	string sum;
	sum=first+last;
	cout<<"\nFull String "<<sum;
	
	string sum1;
	sum1=first+" "+last;
	cout<<"\nFull String 1 "<<sum1<<endl;
	
	cout<<"using Append function "<<first.append(last)<<endl;

	first += last;
	cout<<"\n Full String 2"<<first;	
}
