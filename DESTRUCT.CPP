//program to understand destructor in derived class
#include<iostream.h>
#include<conio.h>
class B1
{
   public:
   B1()
   {
      cout<<endl<<"1";
   }
   ~B1()
   {
      cout<<endl<<"destroy 1";
   }
};
class B2
{
   public:
   B2()
   {
      cout<<endl<<"2";
   }
   ~B2()
   {
      cout<<endl<<"destroy 2";
   }
};
class D:public B1,public B2
{
   public:
   D():B1(),B2()
   {
      cout<<endl<<"3";
   }
   ~D()
   {
      cout<<endl<<"destroy 3";
   }
};
int main()
{
   D obj;
   getch();
   return 0;
 }
