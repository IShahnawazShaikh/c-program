#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
class dimension
{
  int xcm,xmm,Resultant;
  public:
  void input()
    {
     cout<<endl<<"In centimeter"<<endl;
     cin>>xcm;
     cout<<endl<<"In millimeter"<<endl;
     cin>>xmm;
    }
   void change()
    {
      Resultant=(xcm*10)+xmm;
    }
  friend void sum(dimension &obj,dimension &obj2);
};
void sum(dimension &obj,dimension &obj2)
 {
    int result1,result2,resultant;
    resultant=obj.Resultant+obj2.Resultant;
    result1=resultant/10;
    result2=resultant%10;
    cout<<endl<<"Dimension="<<result1<<"cm"<<result2<<"mm";
  }


int main()
 {
   dimension obj1,obj2;
   clrscr();
   cout<<endl<<"enter first line dimension";
   obj1.input();
   cout<<endl<<"enter second line dimension";
   obj2.input();
   obj1.change();
   obj2.change();
   sum(obj1,obj2);
   getch();
   return 0;
 }


