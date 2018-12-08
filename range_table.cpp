#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int i,j,k,r;
  cout<<"Enter the Number ";
  cin>>r;
  for(i=1;i<=r;i++)
  {
    for(j=1;j<=10;j++)
    cout<<i<<" * "<<j<<" = "<<i*j<<endl;
    cout<<"\n";
  }
  return 0;
}


