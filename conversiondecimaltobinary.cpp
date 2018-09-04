#include<iostream>
using namespace std;
void printtoBinary(int n)
{
    if(n>0)
    {
        printtoBinary(n/2);
        cout<<n%2;
    }
}
 int main()
 {
     int n;
     cin>>n;
     printtoBinary(n);
      return 0;
 } 
