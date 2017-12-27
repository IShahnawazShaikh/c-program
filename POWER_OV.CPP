#include<iostream.h>
#include<conio.h>
class POWER
 {
    float x;
    public:
    void input()
     {
	cin>>x;
     }
     POWER operator^(POWER p)
     {
       int i;
       POWER temporary;
       temporary.x=x;
       for(i=1;i<p.x;i++)
       {
	 temporary.x=x*temporary.x;
       }
       return temporary;
    }
       void display()
       {
	 cout<<x;
       }

 };
 int main()
 {
   POWER obj,obj2,obj3;
   clrscr();
   cout<<"Enter the base"<<endl;
   obj.input();
   cout<<endl<<"Enter the power"<<endl;
   obj2.input();
   obj3=obj^obj2;
   cout<<endl<<"Answer is=";
   obj3.display();

   getch();
   return 0;
 }
