//one argument constructor in base and derive class
#include<iostream.h>
#include<conio.h>
class base
{
  public:

  base(int x)
  {
    cout<<"one arg in base="<<x<<endl;
  }
};
class derive:public base
{
  public:
  derive(int y):base(y)
  {
    cout<<"one arg in derive="<<y;
  }
};
int main()
{
  clrscr();
  derive obj(3);
  getch();
}
