//program to understand hybrid inheritance
#include<iostream.h>
#include<conio.h>
#include<string.h>
class Student
{
   protected:
   char name[20],roll[20];
   public:
   void get_roll(char x[],char y[])
   {
      strcpy(roll,x);
      strcpy(name,y);
   }
   void putroll()
   {
     cout<<endl<<"Name="<<name;
     cout<<endl<<"Roll number="<<roll;
   }
};
class Test:public Student
{
   protected:
   float marks1,marks2;
   public:
   void set_marks(float x,float y)
   {
      marks1=x;
      marks2=y;
   }
   void putmarks()
   {
     cout<<endl<<"marks of 1 subject="<<marks1;
     cout<<endl<<"marks of 2 subject="<<marks2;
   }
 };
 class sports
 {
   char favourite[10];
   public:
   void set_game(char x[])
   {
     strcpy(favourite,x);
   }

   void putgame()
   {
     cout<<endl<<"favourite game="<<favourite;
   }
};
class RESULT:public Test,public sports
{
  float total,per;
  public:
  void calculate()
  {
     total=marks1+marks2;
     per=total/2;
   }
  void display()
  {
      putroll();
      putmarks();
      cout<<endl<<"total marks="<<total;
      cout<<endl<<"percentage="<<per;
      putgame();
  }
};

int main()
{
  RESULT obj;
  clrscr();
  obj.get_roll("16-DCS-060","shahnawaz shaikh");
  obj.set_marks(90,90);
  obj.set_game("cricket");
  obj.calculate();
  obj.display();
  getch();
  return 0;
}
