#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int choice,a,b,s;
	while(1)
  {
	cout<<"\n1.Addition";
	cout<<"\n2.Odd_Even";
	cout<<"\n3.printing N Number ";
	cout<<"\n4.Exit ";
	cout<<"\n5.Enter your Choice ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"Enter the Number ";
			cin>>a>>b;
			s=a+b;
			cout<<"Sum is ";
			break;
		case 2:
			cout<<"Enter the Number ";
			cin>>a;
			if(a%2==0)
			cout<<"Even Number are ";
			else
			cout<<"Odd Number are ";
			break;
		case 3:
			cout<<"Enter a Number";
			cin>>a;
			for(b=1;b<=a;b++)
			cout<<b;
			break;
		case 4:
			exit(0);
			default:
			cout<<"Invalid Choice";
	}}
	return 0;
}

