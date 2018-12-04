#include<iostream>
#include<conio.h>
using namespace std;
int leap(int);
main()
{
	int a,b;
	cout<<"Enter the Year ";
	cin>>a;
	b=leap(a);
	if(b)
	{
	  cout<<"Year is Leap ";
    }
	else
	{
	  cout<<"Year is not Leap ";
	}
}
  int leap(int x)
  {
  	int t;
  	if(x%4==0)
  	{
  		t=1;
	}
  	else
  	{
  		t=0;
	}
	return (t);
  }
