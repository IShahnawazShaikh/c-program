//simple program to define member function inside class
#include<iostream.h>
#include<conio.h>
class member
{
   private:                 //Access control specifier
   char name[10],roll[10];
   public:
   void input()
     {
	cout<<endl<<"enter name"<<endl;
	cin>>name;
	cout<<endl<<"enter roll number"<<endl;
	cin>>roll;
      }
    void output()
      {
	 clrscr();
	 gotoxy(25,8);
	 cout<<"Name="<<name;
	 gotoxy(25,10);
	 cout<<"ROll number"<<roll;
       }
  };
  int main()
   {
     member obj;
     clrscr();
     obj.input();
     obj.output();
     getch();
     return 0;
   }






