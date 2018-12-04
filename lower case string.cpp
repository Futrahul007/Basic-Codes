#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[40];
	cout<<"Enter the string in Upper case"<<endl;
	cin>>str;
	strlwr(str);
	cout<<"\n Lower String are = "<<str; 
}
