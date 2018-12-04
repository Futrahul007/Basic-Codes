#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int arr[40],size,i,j,temp;
  cout<<"\n Enter the size of Array ";
  cin>>size;
  cout<<"\n Enter the elements in Array ";
  for(i=0;i<size;i++)
  {
    cin>>arr[i];
  }
  for(i=1;i<size;i++)
  {
    temp=arr[i];
    j=i-1;
    while(j>=0&&arr[j]>>temp)
    {
      arr[j+1]=arr[j];
      j--;
    }
    a[j+1]=temp;
  }
  cout<<"\n Array after insertion sort ";
  for(i=0;i<size;i++)
  {
    cout<<" "<<arr[i];
  }
  return 0;
}
