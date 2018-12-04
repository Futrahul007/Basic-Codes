#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int arr[40],size,i,j,temp,loc,min;
  cout<<"\n Enter the size of Array ";
  cin>>size;
  cout<<"\n\tEnter the Elements of Array ";
  for(i=0;i<size;i++)
  {
    cin>>arr[i];
  }
  for(i=0;i<(size-1);i++)
  {
    min=arr[i];
    loc=i;
    for(j=i+1;j<size;j++)
    {
      if(arr[j]<min)
      {
         min=arr[j];
         loc=j;
      }
     }
       temp=arr[i];
       arr[i]=arr[loc];
       arr[loc]=temp;
   }
  cout<<"\n\tElements after the selection sort ";
  for(i=0;i<size;i++)
  {
    cout<<arr[i]<<" ";
  }
  return 0;
}
