#include <iostream>
#include<math.h>
using namespace std;
void sieve_of_eratosthenes(int x, int y)
{
  int composite[100] = {0};
  for(int m=2;m<=100;m++)
  {
    if(!composite[m])
    {
      for(int k=m*m;k<=100;k+=m)
        composite[k]=true;
    }
  }
  for(int i=x;i<=y;i++)
  {
   int pass=(i!=1);
    for(int j=2;j*j<=i;j++)
    {
      if(!composite[j])
      {
        if(i%j==0)
        {
          pass=0;
          break;
        }
      }
    }
     if(pass)
      cout<<" "<<i;
  }
}

int main()
{
  int x=2,y=100;
  sieve_of_eratosthenes(x,y);
    return 0;
}
