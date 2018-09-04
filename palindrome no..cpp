#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j,reverse=0;
	cout<<"Enter the number";
	cin>>i;
	j=i;
	while(j!=0)
	{
		reverse=reverse*10;
		reverse=reverse + j%10;
		j =  j/10;
	}
	if(i==reverse)
	cout<<"Number is Palindrome"<<i;
	else
	cout<<"Number is not Palindrome"<<i;
	getch();
}

