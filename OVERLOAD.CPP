#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
class compare
{
   char str[20];
   public:
   void input()
   {
       gets(str);
   }
   int  operator==(compare obj)
   {
      int test;
      test=strcmp(str,obj.str);
      if(test==0)
      test=1;
      else
      test=0;
      return test;
   }
 };
 int main()
 {
     compare s1,s2;
     clrscr();
     cout<<endl<<"enter 1st string"<<endl;
     s1.input();
     cout<<endl<<"enter 2nd string"<<endl;
     s2.input();
     if(s1==s2)
     cout<<endl<<"Two string are equal"<<endl;
     else
     cout<<endl<<"Two string are not equal"<endl;
     getch();
     return 0;
  }