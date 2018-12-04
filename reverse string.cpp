#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[40];
	cout<<" \n Enter the string "<<endl;
	cin>>str;
	strrev(str);
	cout<<"\n  Reverse String are = "<<str;
	return 0;
}
