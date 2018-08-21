#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int ts,gs,hr,wa;
	cout<<"Enter the Total Salary :";
	cin>>ts;
	wa = (32*ts)/100;
	hr = (16*ts)/100;
	gs = ts-wa-hr;
	cout<<"\n Gross Salary is = "<<gs;
	getch();
	
}

