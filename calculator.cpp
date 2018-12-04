#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
main()
{
	int choice;
	int fact=1,i,x;
    float a,b,c;
	double d,e,f;
	
	while( 1){
	cout<<"\n1.Addition ";
	cout<<"\n2.Substraction ";
	cout<<"\n3.Multiplication ";
	cout<<"\n4.Division ";
	cout<<"\n5.Square of a number ";
	cout<<"\n6.Cube of a number ";
	cout<<"\n7.Square root of a number ";
	cout<<"\n8.cube root of a number ";
	cout<<"\n9.percentage";
	cout<<"\n10.value of sin ";
	cout<<"\n11.value of cos ";
	cout<<"\n12.value of tan ";
	cout<<"\n13.value of log ";
	cout<<"\n14.factorial ";
	cout<<"\n15.Exponent ";
	cout<<"\n16.exit ";
	cout<<"\nEnter Your Choice";
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"Enter Two Number";
			cin>>a>>b;
			c=a+b;
			cout<<"Addition is "<<c;
			break;
		case 2:
			cout<<"Enter Two Number";
			cin>>a>>b;
			c=a-b;
			cout<<"Substraction is "<<c;
			break;
		case 3:
			cout<<"Enter Two Number";
			cin>>a>>b;
			c=a*b;
			cout<<"Multiplication is "<<c;
			break;
	    case 4:
			cout<<"Enter Two Number";
			cin>>a>>b;
			c=a/b;
			cout<<"Division is "<<c;
			break;
		case 5:
			cout<<"Enter A Number";
			cin>>b;
			b=a*a;
			cout<<"Square of a number is "<<b;
			break;
	   	case 6:
			cout<<"Enter A Number";
			cin>>b;
			b=a*a*a;
			cout<<"Cube of a number is "<<b;
			break;
		case 7:
			cout<<"Enter A Number";
			cin>>e;
			d=sqrt(e);
			cout<<"Square root of a number is "<<d;
			break;
		case 8:
		    cout<<"Enter A Number";
			cin>>d;
			e=pow(d,1.0/3.0);
			cout<<"Cube root of a number is "<<e;
			break;
		case 9:
			cout<<"Enter the number and percent";
			cin>>e>>f;
			d=e*(f/100);
			cout<<"percentage is "<<d;
			break;
		case 10:	
			cout<<"Enter the value ";
			cout<<a;
			b=sin(a*3.14159/180);
			cout<<"value of sin is "<<b;
			break;
		case 11:
		    cout<<"Enter the value ";
		    cin>>a;
		    b=cos(a*3.14159/180);
		    cout<<"value of cos is "<<b;
		    break;
		case 12:    
			cout<<"Enter the value ";
			cin>>a;
			b=tan(a*3.14159/180);
			cout<<"value of tan is "<<b;
			break;
		case 13:
		    cout<<"Enter the value ";
		    cin>>a;
			b=log10(a);
			cout<<"value of log is "<<b;
			break;
		case 14:
		   	cout<<"Enter the number";
	        cin>>x;
	        for(i=1;i<=x;i++)
	        {
	     	fact=fact*i;
         	}
	        cout<<"factorial is "<<fact;
	        
	        break;
		case 15:
		    cout<<"Enter the number ";
			cin>>e;
			d=exp(e);
			cout<<"Exponential value is "<<d;
			break;		
		case 16: exit(1);
		    default:
		    	cout<<("Invalid Choice");
		}}
	    getch();
}
	    


