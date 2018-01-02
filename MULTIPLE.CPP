//program to understand multiple inheritance
#include<iostream.h>
#include<conio.h>
class HOME
{
   protected:
   int pocketmoney;
   public:
   set_money(int x)
   {
      pocketmoney=x;
   }
};
class OFFICE
{
  protected:
  int salary;
  void set_salary(int x)
  {
     salary=x;
  }
};
class COLLEGE:private HOME,private OFFICE
{
    private:
    int event_fund;
    public:
    void display()
    {
       set_money(500);
       set_salary(100);
       event_fund=pocketmoney+salary;
       cout<<endl<<"After contribution Event fund become="<<event_fund;
    }
 };
int main()
{
   COLLEGE obj;
   clrscr();
   obj.display();
   getch();
   return 0;
}
