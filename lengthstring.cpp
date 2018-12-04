#include<iostream>
#include<string.h>
using namespace std;
int strlen( char* );
int main()
{
	char str[]="RAHUL";
	int len1;
	len1 = strlen(str);
	cout<<"String Name = "<<str<<endl<<"String length = "<<len1;
	return 0;
}
   int strlen (char*s1)
 {
 	int length = 0;
 	while(*s1!= '\0')
 	{
 		length++;
 		s1++;
	 }
	  return length;
 }
