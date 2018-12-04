#include<iostream>
#include<conio.h>
using namespace std;
struct customer
{
	char name[20];
	int account_number;
	float balance;
}cust[200];
main()
{
	int i,n;
	cout<<"Enter the Number of Customer ";
	cin>>n;
	cout<<"Records of Customer "<<endl;
	for(i=0;i<n;i++)
	{
	  cout<<"Customer Account Number ";
	  cin>>cust[i].account_number;
	  cout<<"Name of customer ";
	  cin>>cust[i].name;
	  cout<<"Balance in Account ";
	  cin>>cust[i].balance;	
	  cout<<endl;
	}
	cout<<"Data of Customer "<<endl;
	for(i=0;i<n;i++)
	{
	  cout<<"Name of Customer "<<cust[i].name<<endl;
	  cout<<"Account Number of Customer "<<cust[i].account_number<<endl;
      cout<<"Balance in Customer account "<<cust[i].balance<<endl;
	  cout<<endl;
    }
}
