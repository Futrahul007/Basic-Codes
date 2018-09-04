#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int x,y,i,a,b;
	cin>>a;
	for(i=0;i<a;i++)
	{
		cin>>x;
		cin>>y;
		b=x*y;
		if(b%2==0)
		 cout<<1;
		 else
		 cout<<0;	
	}
	return 0;
}
