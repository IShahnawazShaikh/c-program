//program to take input your name and save it in a file
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
int main()
{
   char name[20];
   clrscr();
   ofstream obj("output.txt");
   cout<<endl<<"Enter your name"<<endl;
   gets(name);
   obj<<name;
   getch();
   return 0;
}
