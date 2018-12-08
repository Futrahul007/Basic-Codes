#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
  int num,i=1;
    cout <<"Enter the Number ";
    cin>>num;
    cout<<"Multiplication table of given number is "<<num<<endl;
    while(i<=10)
    {
      cout<<num<<" * "<<i<<" = "<<num*i<<endl;
       i++;
    }
    return 0;
}
