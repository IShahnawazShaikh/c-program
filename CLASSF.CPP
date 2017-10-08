//program to make the friend of class to another class
#include<iostream.h>
#include<conio.h>
class girl;
class boy       //making first class
{ int money;
  public:
  void input()
  {
    cin>>money;
  }
  void output()
  {
   cout<<"money="<<money;
  }
  friend class girl;       // making the class as friend
};

class girl      //making second class
{
  int money;
  public:
  void input()
  {

    cin>>money;
  }
  void output()
  {
    cout<<"total money og girl money="<<money;
  }
  void Add(boy *b)
  {
    money+=b->money;
  }
};
int main()
{  boy b;
  girl g;
  clrscr();
  cout<<"enter boy money"<<endl;
  b.input();
 // b.output();
  cout<<"enter girl money"<<endl;
  g.input();
 // g.output();
  g.Add(&b);
  g.output();
  getch();
  return 0;
  }
