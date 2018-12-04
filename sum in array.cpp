#include<iostream>
using namespace std;
int main()
{
   int t,s;
   cin>>t;
   for(s=0;s<t;s++)
   {
   	int i,j,n,sum=0;
   	cin>>n;
   	int arr[n];
   	for(i=0;i<n;i++)
   	{
   	   cin>>arr[i];
	   for(j=i+1;j<n;j++)
	   {
	   	if(arr[j]-arr[i]>1)
		   {
	   		 sum=sum+(arr[j]-arr[i]);
		   }
		   cout<<sum;
		}	
	}
   }
   return 0;
}
