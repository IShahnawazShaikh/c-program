//program to understand static data member and member function
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class traveller
{
   static int total;
   char name[20];
   int age;
   public:
   void input()
   {
      cout<<endl<<"Enter the name of traveller"<<endl;
      gets(name);
      cout<<endl<<"Enter the age of traveller"<<endl;
      cin>>age;
   }
  void output()
  {
     cout<<endl<<"Name="<<name<<endl<<"age="<<age;
  }
  void add()
  {
     ++total;
  }
  static tot_traveller()
  {
     cout<<endl<<"Total member for travelling="<<total;
  }

};
int traveller::total=0;
int main()
{
   traveller traveller_obj[3];
   int i;
   clrscr();
   for(i=0;i<3;i++)
   {
     traveller_obj[i].input();
     traveller_obj[i].add();
   }
   cout<<endl<<"traveller details"<<endl;
   for(i=0;i<4;i++)
   {
     traveller_obj[i].output();
   }
   traveller::tot_traveller();
   getch();
   return 0;
}
