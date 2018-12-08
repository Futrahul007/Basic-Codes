#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int i,j,mat1[3][3];
  int determinant=0;
  cout<<"Enter the elements of 3*3 matrix ";
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      cin>>mat1[i][j];
    }
  }
  cout<<"\n The Matrix is \n";
  for(i=0;i<3;i++)
  {
  	cout<<endl;
    for(j=0;j<3;j++)
    {
     cout<<"\t"<<mat1[i][j];
    }
  }
  determinant = mat1[0][0]*((mat1[1][1] * mat1[2][2])- (mat1[2][1] * mat1[1][2])) -
                mat1[0][1]*((mat1[1][0] * mat1[2][2])- (mat1[2][0] * mat1[1][2])) +
                mat1[0][2]*((mat1[1][0] * mat1[2][1])- (mat1[2][0] * mat1[1][1]));
    cout<<"\n Determinant of 3*3 matrix is "<<determinant;
    return 0;
}


