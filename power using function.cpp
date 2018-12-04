#include<iostream>
#include<conio.h>
using namespace std;
int power(int,int);
main()
{
	int a,b,c;
	cout<<"Enter the Base and Exponent ";
	cin>>a>>b;
	c=power(a,b);
	cout<<"Power is "<<c;
}
 int power(int x,int y)
 {
   int i,power=1;
   for(i=1;i<=y;i++)
   power=power*x;
   return (power);	
 }
