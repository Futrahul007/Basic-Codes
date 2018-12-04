#include<iostream>
using namespace std;
int main()
{
	int i,j,rows;
	char k;
     cout<<"Enter the Number of rows ";
     cin>>rows;
	for(i=1;i<=rows;i++)
	{
		k='A';
		for(j=1;j<=rows;j++)
		{
			if(j<=i)
			{
			 cout<<k;
			 k++;
			}
			else
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}

