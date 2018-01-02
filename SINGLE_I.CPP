#include<iostream.h>
#include<conio.h>
class Base
{
  int mom_money;
  public:
  int dad_money;
  void input()
  {
     cout<<endl<<"enter mom money"<<endl;
     cin>>mom_money;
     cout<<endl<<"enter dad money"<<endl;
     cin>>dad_money;
   }
   int mom()
   {
      return mom_money;
   }
};
class Derive:public Base
{
   int child_money;
    public:
    void input1()
    {
      cout<<endl<<"enter child money"<<endl;
      cin>>child_money;
    }
    void total()
    {
       int total;
       total=child_money+dad_money+mom();
	cout<<endl<<"Total money of child become="<<total;
    }

 };
 int main()
 {
    clrscr();
    Derive obj;
    obj.input();
    obj.input1();
    obj.total();
    getch();
    return 0;
 }
