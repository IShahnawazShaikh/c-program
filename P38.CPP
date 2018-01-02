//constructor in multilevel inheritance
#include<iostream.h>
#include<conio.h>
class base1
{
  public:
  base1()
  {
    cout<<"1"<<endl;
  }

};
class base2:public base1
{
  public:
  base2()
  {
    cout<<"2"<<endl;
  }

};
class derive:public base2
{
  public:
  derive()//:base1(),base2()
  {
    cout<<"3";
  }
};

int main()
{
  clrscr();
  derive obj;
  getch();
}
