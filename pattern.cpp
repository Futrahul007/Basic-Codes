#include<iostream>
using namespace std;
int main()
{
	int i,j;
	char k='A';
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=6;j++)
		{
			if(i==1||i==6||j==1||j==6)
			{
			 cout<<k;
			 k++;
			}
			else
			cout<<"$";
		}
		cout<<endl;
	}
	return 0;
}
