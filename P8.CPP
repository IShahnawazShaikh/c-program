//program to implement polymorphism with friend function of 2 classes
#include<iostream.h>
#include<conio.h>
class Rec
{int l,b;
  public:
    void input()
    {cout<<"enter length and breadth";
       cin>>l>>b;}
     friend void area(Rec R);
  };
class Tri
{int b,h;
   public:
   void input()
   {cout<<"enter the base and height";
     cin>>b>>h;}
   friend void area(Tri T);
 };
 void area(Rec R)
 { float area;
   area=R.l*R.b;
   cout<<"Area of rectangle="<<area;}
  void area(Tri T)
 { float area;
   area=0.5*T.b*T.h;
   cout<<endl<<"Area of triangle="<<area;}
 int main()
 { Rec R;
   Tri T;
     clrscr();
     R.input();
     T.input();
     area(R);
     area(T);
     getch();
     return 0;
   }



