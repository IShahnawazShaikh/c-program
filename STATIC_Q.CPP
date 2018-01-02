//program to understand static data member and member function
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class QURBANI
{
   static int member,group;
   char name[20];
   float Amount;
   public:
   void input()
   {
      cout<<endl<<"Enter the name of person"<<endl;
      gets(name);
      cout<<endl<<"Enter the money for qurbani"<<endl;
      cin>>Amount;
   }
  void output()
  {

     cout<<endl<<"Name="<<name<<endl<<"Amount="<<Amount;
  }
  void add()
  {
     ++member;
     if(member==3)
     {
       ++group;
       member=0;
     }

  }
  static void details()
  {
     cout<<endl<<"Number of goat for qurbani="<<member;
     cout<<endl<<"Number of camel for qurbani="<<group;
  }

};
int QURBANI::member=0;
int QURBANI::group=0;
int main()
{
   QURBANI person[4];
   int i;
   clrscr();
   for(i=0;i<4;i++)
   {
     cout<<endl<<"Data of "<<i+1<<" person"<<endl;
     person[i].input();
     person[i].add();
   }
   clrscr();
   cout<<endl<<"Persons details"<<endl;
   for(i=0;i<4;i++)
   {
     person[i].output();
   }
   QURBANI::details();
   getch();
   return 0;
}
