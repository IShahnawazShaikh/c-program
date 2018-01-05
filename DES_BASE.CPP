//program to understand virtual destructor
#include<iostream.h>
#include<conio.h>
class base
{
   public:
   base()
   {
      cout<<endl<<"base constructor"<<endl;
   }
   virtual~base()
   {
      cout<<endl<<"base destructor"<<endl;
   }
};
class derive:public base
{
   public:
   derive()
   {
      cout<<endl<<"derive constructor"<<endl;
   }
   ~derive()
   {
      cout<<endl<<"derive destructor"<<endl;
   }
};
int main()
{
   clrscr();
  base *b1=new derive();
  delete b1;
  getch();
  return 0;
}


