#include<iostream.h>
#include<conio.h>
class student
{
  char name[20];
  public:
  void input()
  {
    cout<<endl<<"enter name";
    cin>>name;
  }
  void display()
  {
     cout<<endl<<"Name="<<name;
  }
    void cl()
    {
       class m
       {
	 public:
	 int a;
	 void fun()
	 {
	    cout<<endl<<a;
	 }
       };
      m obj2;
      obj2.a=20;
      obj2.fun();
    }
};
void function();
int main()
 {
   student obj;
   clrscr();
   obj.input();
   obj.display();
   function();
   obj.cl();
   getch();
   return 0;
}
   void function()
   {

      class st
      {
	public:
	int roll;
	void display()
	{
	  cout<<endl<<"roll number="<<roll;
	}
      };
      st obj;
      obj.roll=45;
      obj.display();
   }