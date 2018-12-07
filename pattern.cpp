#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int i,j;
  char k;
  for(i=1;i<=7;i++)
  {
  	k='A';
    for(j=1;j<=13;j++)
      if(j<=8-i || j>=6+i)
    {
      cout<<k;
      j<7?k++:k--;
    }
    else
      cout<<" ";
      cout<<endl;
  }
  cout<<endl;
}

