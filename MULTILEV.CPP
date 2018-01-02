//program to understand multilevel inheritance
#include<iostream.h>
#include<conio.h>
class base
{
   protected:
   int a;
   public:
   void get_value(int x)
   {
      a=x;
   }
};
class intermediate:public base
{
   protected:
   int b;
   public:
   void set_value(int x)
   {
      b=x;
   }
 };
 class derive:public intermediate
 {
   int c;
   public:
   void set(int x)
   {
     c=x;
   }
   void sum()
   {
     int sum;
     sum=a+b+c;
     cout<<endl<<"Sum of three number of different classes="<<sum;
   }
};
int main()
{
  derive obj;
  clrscr();
  obj.get_value(4);
  obj.set_value(3);
  obj.set(2);
  obj.sum();
  getch();
  return 0;
}
