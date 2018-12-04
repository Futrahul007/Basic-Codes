#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
void fun(int a,int b,int c,int d,int e,int *sum,float *avg,float *std)
{
	*sum=a+b+c+d+e;
	*avg=*sum/5.0;
	*std=sqrt((((a-*avg)*(a-*avg))+((b-*avg)*(b-*avg))+((c-*avg)*(c-*avg))+((d-*avg)*(d-*avg))+((e-*avg)*(e-*avg)))/5.0);
}
  int main()
  {
  	float avg,std;
  	int a,b,c,d,e,sum;
  	cout<<"Enter five Number";
  	cin>>a>>b>>c>>d>>e;
  	fun(a,b,c,d,e,&sum,&avg,&std);
  	cout<<"Sum is "<<sum<<endl<<"Average is "<<avg<<endl<<"Standard Deviation is"<<std<<endl;
  	return 0;
  }
