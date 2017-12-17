#include<iostream.h>
#include<conio.h>
class base
{
  public:
  virtual void show()
  {
     cout<<endl<<"base class";
   }
 };
class derive:public base
{
   void show()
   {
      cout<<endl<<"derive class";
    }
  };
  int main()
  {
      base *ptr;
      base f;
      derive d;
      clrscr();
      ptr=&f;
      ptr->show();
      ptr=&d;
      ptr->show();
      getch();
      return 0;
  }