#include<iostream>
using namespace std;
class draw
{
  protected:
  int x;
  public:
  void input()
  {
     cin>>x;
  }
   virtual void area()=0;
 };
 class square:public draw
 {
   public:
   void area()
   {
      cout<<"area="<<x*x;
   }
 };
 class circle:public draw
 {
    public:
    void area()
    {
      //cout<<endl<<x;
	  cout<<endl<<"area2="<<3.14*x*x;
    }
 };
 int main()
 {
    square b;
    circle c;
    
    cout<<"enter side of square"<<endl;

    b.input();
    cout<<endl<<"entter the radius of circle"<<endl;

    c.input();
    b.area();
    c.area();
    return 0;
 }

