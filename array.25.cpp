#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int arr[25],i,present=0,size,num;
    cout <<"Enter the Size of Array ";
    cin>>size;
    cout<<"Enter the Elements of Array ";
    for(i=0;i<size;i++)
    {
      cin>>arr[i];
    }
    cout<<"Enter the number to be find ";
    cin>>num;
    for(i=0;i<size;i++)
    {
      if(num==arr[i])
        present++;
    }
    if(present==0)
    {
      cout<<"Number does not present in an Array ";
    }
    else
      {
        cout<<"Number present in an Array "<<endl;
        cout<<"Number of times "<<present;
      }
    return 0;
}
