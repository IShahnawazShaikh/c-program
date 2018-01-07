//program to read string from one file and save it into another file.
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<iostream.h>
int main()
{
   char name[20];
   clrscr();
   ifstream obj("output.txt");
   ofstream obj2("outputt.text");
   obj>>name;
   obj.close();
   obj2<<name;
   obj2.close();
   getch();
   return 0;
}
