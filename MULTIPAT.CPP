//program to understand multipath inheritance
#include<iostream.h>
#include<conio.h>
class DAD
{
  public:
  int dad_money;
};
class relatives1:virtual public DAD
{
   public:
   int relative1_money;
};
class relatives2:virtual public DAD
{
   public:
   int relative2_money;
};
class child:public relatives1,public relatives2
{
    int total;
    public:
    void total_money()
    {
      total=relative1_money+relative2_money+dad_money;
       cout<<endl<<"total money of child="<<total;
     }
 };
 int main()
 {
    child obj;
    clrscr();
    obj.dad_money=2000;
    obj.relative1_money=1000;
    obj.relative2_money=500;
    obj.total_money();
    getch();
    return 0;
 }

