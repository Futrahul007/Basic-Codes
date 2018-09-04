#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int i,n,sum=0,num;
	float avg;
	cout<<"Enter the number do you want to sum";
	cin>>n;
	
	cout<<"Enter the element one by one";
	for(i=0;i<n;++i)
	{
		cin>>num;
		sum = sum + num;
	}
	 avg = sum/n;
	 cout<<"\n Sum of number is "<<sum;
	 cout<<"\n Average of number is "<<avg;
	 getch();
	
}

