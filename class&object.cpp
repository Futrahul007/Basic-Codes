#include<iostream>
#include<string.h>
using namespace std;
class student
{
  private:
  string name;
  char branch[20];
  int roll,semester,year;
  public:
  void getdata();
  void putdata();	
};
  void student::getdata()
{
  cout<<"Name of Student = ";
  getline(cin,name);
  cout<<"Branch of Student = ";
  cin>>branch;
  cout<<"Year = ";
  cin>>year;
  cout<<"Semester = ";
  cin>>semester;
  cout<<"Roll No.of student = ";
  cin>>roll;
}
  void student::putdata()
{
  cout<<"Student Details "<<endl;
  cout<<"Name of Student = "<<name<<endl;
  cout<<"Branch of Student = "<<branch<<endl;
  cout<<"Year = "<<year<<endl;
  cout<<"Semester = "<<semester<<endl;
  cout<<"Roll No.of Student "<<roll<<endl;	
}
  int main()
{
  student std;
  std.getdata();
  std.putdata();
  return 0;
}
