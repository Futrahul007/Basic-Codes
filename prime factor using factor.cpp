#include<iostream>
#include<conio.h>
using namespace std;
int prime_factor(int);
main()
{
	int a,b;
	cout<<"Enter the Number ";
	cin>>a;
	prime_factor(a);
}
  int prime_factor(int x)
  {
  	int i;
  	cout<<"Prime Factor is ";
  	for(i=2;x>1;i++)
  	{
  		while(x%i==0)
  		{
  			cout<<" "<<i;
  			x=x/i;
		}
	  }
  }

