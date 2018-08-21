#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int cp,sp,loss,gain;
	cout<<"Enter the Rs.= cp and Rs.= sp";
	cin>>cp>>sp;
	if(sp>cp)
	{
		gain = sp-cp;
		cout<<"gain is Rs. "<<gain;
	}
	else if(cp>sp)
	{
		 loss = cp-sp;
		 cout<<"loss is Rs. "<<loss; 
	}
	else
	{
		cout<<"neither gain nor loss";
	}
	getch();
}
