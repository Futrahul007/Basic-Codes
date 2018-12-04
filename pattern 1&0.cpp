#include<iostream>
using namespace std;
int main()
{
	int i,j,rows;
     cout<<"Enter the Number of rows ";
     cin>>rows;
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=rows;j++)
		{
			if(i==1||i==rows||j==1||j==rows)
			{
			 cout<<"0";
			}
			else
			cout<<"1";
		}
		cout<<endl;
	}
	return 0;
}

