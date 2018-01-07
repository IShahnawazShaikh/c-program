/*program to take record of employee and write the record in file*/
/*Read the record from the file and print it*/
#include<fstream.h>
#include<conio.h>
#include<iostream.h>
int main()
{
   char name[20];
   int age,sallery;
   clrscr();
   cout<<endl<<"enter the name of employee"<<endl;
   cin>>name;
   cout<<endl<<"enter age of employ"<<endl;
   cin>>age;
   cout<<endl<<"enter sallery of employ"<<endl;
   cin>>sallery;
   ofstream obj("output.txt");
   obj<<name<<" ";
   obj<<age<<" ";
   obj<<sallery;
   obj.close();
   ifstream obj2("output.txt");
   obj2>>name;
   obj2>>age;
   obj2>>sallery;
   obj2.close();
   cout<<endl<<"name="<<name<<endl<<"age="<<age<<endl<<"sallery="<<sallery;
   getch();
   return 0;
}
