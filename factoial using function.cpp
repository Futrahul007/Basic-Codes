#include<iostream>
#include<conio.h>
using namespace std;
int fact(int);
main()
{
  int n,f;
  cout<<"Enter the Number ";
  cin>>n;
  f=fact(n);
  cout<<"Factorial is "<<f;
}
  int fact(int a)
  {
      int i,fact=1;
      for(i=1;i<=a;i++)
      fact=fact*i;
      return (fact);
  }
