#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string nky;
	cout<<"Enter string ";
	cin>>nky;
	cout<<"\nEntered string is "<<nky<<endl; //compiler reads till first space
	
	//types of string decleration	
	string s1("Hamester is incomplete without x");
	string s2,s3;
	
	//copying string in each other
	s2=s1;
	s3.assign(s1);
	
	cout<<s1<<endl<<s2<<endl<<s3<<endl;
	
	// Inserting & Replace string
	// index(location,string_variable)
	
	string s5("se");
	cout<<s1.length()<<endl;
	cout<<s1.insert(31,s5)<<endl;
	
	// Replaceing 	
	
	string s6;
	// replace(location,length_for_replaced_string,replacing string);	
	cout<<s1.replace(31,s1.length(),"sex")<<endl;
	cout<<"________________________"<<endl;
	cout<<s1.replace(31,3,"sex")<<endl;
	
	string s4="Nitin KUMAR YADAV";
	cout<<s4.at(6)<<endl;
	
	for(int x=0;x<s4.length();x++)
	{
		cout<<s4.at(x);	
	}
	cout<<endl;
	return 0; // Its optional in main in C
}
