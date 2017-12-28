//program to convert character and ASCII value
#include<iostream.h>
#include<conio.h>
class convert
{
   int value;
   char ch;
   public:
   void output(int x)
    {
      ch=x;
      cout<<endl<<"Corresponding character="<<ch;
    }
    void output(char y)
     {
	value=y;
	cout<<"Corresponding ASCII value="<<value;
     }
};
int main()
{
  convert obj;
  int n,value;
  char ch;
  clrscr();
  cout<<endl<<"Enter 1 to convert cahracter from ASCII value"<<endl;
  cout<<"Enter 2 to conver ASCII value from character"<<endl;
  cin>>n;
  switch(n)
   {
     case 1:
     cout<<endl<<"Enter ASCII value"<<endl;
     cin>>value;
     obj.output(value);
     break;
     case 2:
     cout<<"Enter character"<<endl;
     cin>>ch;
     obj.output(ch);
    }
    getch();
    return 0;
  }