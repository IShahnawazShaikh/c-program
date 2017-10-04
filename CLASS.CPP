//program to demonstrate the use of class
#include<iostream.h>
#include<conio.h>
class class_name
{
 char name[20],roll[10];
  public:
  void input()
  {  cout<<"enter the student name"<<endl;
     cin>>name;
     cout<<"enter roll number of student"<<endl;
      cin>>roll;
   }
   void output()
   {  cout<<"name="<<name<<endl<<"Roll no="<<roll;
   }
 };
 int main()
 { class_name obj;
    clrscr();
    obj.input();
    obj.output();
    getch();
    return 0;
   }