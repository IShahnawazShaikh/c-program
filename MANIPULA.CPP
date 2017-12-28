//example of manipulator
#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
int main()
{
  int basic=950;
  float a=12.3333;
  clrscr();
  cout<<"basic="<<setw(10)<<basic;
  cout<<endl<<"float="<<setw(10)<<setprecision(2)<<a;
  getch();
  return 0;
}