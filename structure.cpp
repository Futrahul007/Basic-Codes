#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
struct student
{
	char name[20],dept[20],course[20];
	int roll,year_join;;
}stud[450];
main()
{
	int i,n;
	cout<<"Enter the number of student ";
	cin>>n;
	cout<<"Enter the records of student "<<endl;
	for(i=0;i<n;i++)
	{
	 cout<<"Enter Name ";
	 cin>>stud[i].name;
	 cout<<"Enter Department ";
	 cin>>stud[i].dept;
	 cout<<"Enter Roll No. ";
	 cin>>stud[i].roll;
	 cout<<"Year of Joining ";
	 cin>>stud[i].year_join;
	 cout<<"Enter Course ";
	 cin>>stud[i].course;
	 cout<<endl;
	}
	cout<<"Data of students are "<<endl;
	for(i=0;i<n;i++)
	{
	 cout<<"Name of Student "<<stud[i].name<<endl;
	 cout<<"Department of Student "<<stud[i].dept<<endl;;
	 cout<<"Roll No. of Student "<<i+1<<endl;
	 cout<<"Year of Joining of Student is "<<stud[i].year_join<<endl;
	 cout<<"Course of Student is "<<stud[i].course<<endl;
	 cout<<endl;
	}
}
