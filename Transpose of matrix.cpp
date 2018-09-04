#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 int i,j,k,mat[3][3],matrixtranspose[3][3];
 cout<<"Enter the matrix eiements";
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   cin>>mat[i][j];
  }
 }
 cout<<"\nTranspose of given matrix";
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   matrixtranspose[i][j] = mat[j][i];
  }
 }
 cout<<"Transpose of matrix is";
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
    cout<<matrixtranspose[i][j]<<" ";
  }
  cout<<"\n";
 }
 getch();
}
