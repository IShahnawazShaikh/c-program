#include<iostream.h>
#include<conio.h>
class rectangle
 {
   float l,b;
   public:
   void input()
   {
     cout<<"enter length and breadth of rectangle"<<endl;
     cin>>l>>b;
   }
   friend void area(rectangle &);
 };
 class circle
 {
    int radius;
    public:
    void input()
    {
      cout<<endl<<"Enter radius of circle"<<endl;
      cin>>radius;
    }
    friend void area(circle &);
 };
 class cuboid
 {
   int l,b,h;
   public:
   void input()
    {
      cout<<endl<<"enter length,breadth and height"<<endl;
      cin>>l>>b>>h;
    }
   friend void area(cuboid &);
 };
 void area(rectangle &l)
 {
   float ar;
   ar=l.l*l.b;
   cout<<endl<<"Area="<<ar;
 }
 void area(circle &l)
 {
   float ar;
   ar=l.radius*3.14;
   cout<<endl<<"Area="<<ar;
 }
 void area(cuboid &l)
 {
   float ar;
   ar=2*(l.l*l.b+l.b*l.h+l.l*l.h);
   cout<<endl<<"Area="<<ar;
 }
 int main()
 {
    rectangle obj1;
    circle obj2;
    cuboid obj3;
    clrscr();
    obj1.input();
    obj2.input();
    obj3.input();
    area(obj1);
    area(obj2);
    area(obj3);
    getch();
    return 0;
  }





