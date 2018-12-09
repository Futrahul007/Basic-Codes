#include<iostream>
#include<conio.h>
using namespace std;
int power(int, int);
int main()
{
  int num,temp,sum=0,remainder,digits=0;
    cout<<"Enter a Number "<<endl;
    cin>>num;
    temp=num;
    while(temp!=0)
    {
      digits++;
      temp = temp/10;
    }
    temp=num;
    while(temp!=0)
    {
      remainder = temp%10;
      sum = sum + power(remainder, digits);
      temp=temp/10;
    }
    if(num==sum)
      cout<<"Number is Armstrong "<<num;
    else
      cout<<"Number is not Armstrong "<<num;
    return 0;
}
  int power(int n,int r)
  {
    int c,p=1;
    for(c=1;c<=r;c++)
      p=p*n;
    return p;
  }
