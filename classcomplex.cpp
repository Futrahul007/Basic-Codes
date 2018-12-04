#include<iostream>
using namespace std;
class complex
{
    public:
    int real;
    int imaginary;
};
int main()
{
    complex c1,c2,c3;
    cout<<"enter the two  complex no"<<endl;
    cout<<"enter the first complex no:";
    cin>>c1.real>>c1.imaginary;
    cout<<"first complex no:"<<c1.real<<"+"<<c1.imaginary<<"i"<<endl;
    cout<<"enter the second complex no:";
    cin>>c2.real>>c2.imaginary;
    cout<<"second complx no:"<<c2.real<<"+"<<c2.imaginary<<"i"<<endl;
    c3.real=c1.real+c2.real;
    c3.imaginary=c1.imaginary+c2.imaginary;
    cout<<"sum of two complex no:"<<c3.real<<"+"<<c3.imaginary<<"i";
}
