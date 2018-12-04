#include<iostream>
#include<string.h>
using namespace std;
int strcmp(char*,char*);
int main()
{
	char str1[40],str2[40];
	cout<<" \n Enter first String ";
	cin>>str1;
	cout<<" \n Enter second String ";
	cin>>str2;
    if(strcmp(str1,str2)==0)
    cout<<"\n String are equal ";
    else
    cout<<"\n String are not equal ";
    return 0;
}
  int strcmp(char*s1,char*s2)
  {
  	while(*s1==*s2)
  	{
  		if(*s1=='\0'||*s2=='\0')
  		break;
  		s1++;
  		s2++;
  	
	}
	if(*s1=='\0'&&*s2=='\0')
	  return 0;
	  else
	  return -1;
  }
