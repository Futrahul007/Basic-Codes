#include<iostream>
using namespace std; 
int main()
{
	int x,i,first=0,second=1,next;
	cout<<"Enter the number of terms"<<endl;
	cin>>x;
	cout<<" First term of "<< x <<" fibonacci series is \t"<<endl;
	for(i=0;i<x;i++)
	{
		 if(i<=1)
		{
		 next=i;
	    }
		 else
		{
		 next=first+second;
		 first=second;
		 second=next;
	    }
		cout<<" "<<next;
   }
	return 0;
}
