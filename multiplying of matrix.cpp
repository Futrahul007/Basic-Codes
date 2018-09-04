#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 int i,j,k,sum=0,mat1[3][3],mat2[3][3],mat3[3][3];
 cout<<"Enter first elements matrix";
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   {
    cin>>mat1[i][j];
   }
  }
  cout<<"Enter second matrix elements";
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   {
    cin>>mat2[i][j];
   }
  }
  cout<<"Multiplying the two matrix";
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   {
      sum = 0;
    for(k=0;k<3;k++)
    {
      sum = sum + mat1[i][k] * mat2[k][j];
    }
    mat3[i][j] = sum;
   }
 }
    cout<<"\nMultiplication of given two marix is \n";
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   {
    cout<<mat3[i][j]<<" ";
   }
   cout<<"\n";
  }
  return 0;
}

   
