//program to understand read and write in binary format
#include<fstream.h>
#include<conio.h>
#include<iostream.h>
class student
{
   int roll;
   char name[20];
   public:
   void input()
   {
     cout<<endl<<"enter name of student"<<endl;
     cin>>name;
     cout<<endl<<"enter roll number"<<endl;
     cin>>roll;
  }
  void output()
  {
     cout<<name;
     cout<<endl<<roll;
  }
};
int main()
{
   student s,s1;
   clrscr();
   s.input();
   fstream file("student.txt",ios::out);
   file.write((char*)&s,sizeof(s));
   file.close();
   file.open("student.txt",ios::in);
   file.read((char*)&s1,sizeof(s1));
   s1.output();
   file.close();
   getch();
   return 0;
 }