//program to implement the concept of polymorphism
#include<iostream.h>
#include<conio.h>
void area(int a,int b)
{ cout<<"Area of rectangle="<<a*b;
}
void area (float x,float z)
{
  cout<<endl<<endl<<"Area of rectangle="<<x*z;}
void area(char A,char B)
{cout<<endl<<"two characters are="<<A<<" "<<B;
}
int main()
{  float l,b,l1,b1;
    char R,r;
     clrscr();
     cout<<endl<<"enter the length and breadth of rectangle"<<endl;
     cin>>l>>b;
     area(l,b);
     cout<<endl<<"enter the length breadth of rectangle"<<endl;
     cin>>l1>>b1;
     area(l1,b1);
     cout<<endl<<"enter two character"<<endl;
     cin>>r>>R;
     area(r,R);
   getch();
   return 0;
   }
