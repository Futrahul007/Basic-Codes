#include<iostream>
#include<conio.h>
using namespace std;
int count_max_contigous(int arr[],int n)
{
 int current_max=0,max_so_far=0;
 for(int i=0;i<n;i++)
 {
   if(arr[i]%2!=0)
   	 current_max=0;
   	 else{
   	 current_max++;
   	 max_so_far= max(current_max,max_so_far);
		}
	}
	return max_so_far;
}
int main()
{
	int arr[]={1,0,2,4,3,8,12,9 };
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<count_max_contigous(arr,n);
	return 0;
}
