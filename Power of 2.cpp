#include<iostream>
using namespace std;
int main()
{
	int t;
    cin>>t;
    if(t && ((t & (t-1))  == 0 ))
    {
    	cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
	return 0;
}
      

