#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
  int num,temp,digit1,digit2,digit3;
    cout <<"Print out all Armstrong number between 1 and 1000 ";
    num = 001;
    while(num<=900)
    {
      digit1 = num-((num/10)*10);
      digit2 = (num/10)-((num/100)*10);
      digit3 = (num/100)-((num/1000)*10);
      temp = (digit1*digit1*digit1) +(digit2*digit2*digit2) +(digit3*digit3*digit3);
    if(temp==num)
    {
      cout<<"Armstrong Number are "<<temp<<endl;
    }
    num++;
    }
  return 0;
}
