#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
void fun(int a,int b,int c,int full,float *avg,float *per)
{
	*avg=(a+b+c)/3.0;
	*per=(*avg/full)*100.0;
}
   int main()
  {
  	float avg,per;
  	int a,b,c,full;
  	cout<<"Enter three Number";
  	cin>>a>>b>>c>>full;
  	fun(a,b,c,full,&avg,&per);
  	cout<<"Average is "<<avg<<endl<<"Percentage are "<<per<<endl;
  	return 0;
  }
