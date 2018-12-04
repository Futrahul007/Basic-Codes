#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,k,j,rows;
	k=1;
	cout<<"Enter The Number of Rows ";
	cin>>rows;
	for(i=1;i<=rows;i++)
	{
		for(j=rows;j>=1;j--)
		{
		  if(j>i)
		  cout<<" ";
		  else
		  cout<<" "<<k++;
        }
        cout<<endl;
    }
    return 0;
}
