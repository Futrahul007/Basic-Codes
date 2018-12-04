#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str1[100],str2[100];
	int i;
	cout<<"\n Enter the first string";
	cin>>str1;
	cout<<"\n Enter the second string";
	cin>>str2;
	strcat(str1,str2);
	cout<<"\n cancatenate of two string "<<str1;
	return 0;
}
