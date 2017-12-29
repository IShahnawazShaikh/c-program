#include<iostream.h>
#include<conio.h>
#include<math.h>
class interest
{
  float v,p,r,n;
  public:
  void input()
  {
   cout<<endl<<"enter principle"<<endl;
   cin>>p;
   cout<<endl<<"enter rate of interest"<<endl;
   cin>>r;
   cout<<endl<<"enter time of interest"<<endl;
   cin>>n;
  }
  void output();
};
  void interest::output()
  {
     for(int i=0;i<n;i++)
     {
       v=p*(1+r);
       p=v;
     }
    //v=pow(1+r,n)*p;    another way to calculte.
    cout<<endl<<"interest="<<v;

  }
int main()
{
  interest obj;
  clrscr();
  obj.input();
  obj.output();
  getch();
  return 0;
 }