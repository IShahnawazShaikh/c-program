//program to ditribut money by passing object as address
#include<iostream.h>
#include<conio.h>
class pesa
{ int money;
  public:
  void inputdata()
  {
   cin>>money;
  }
    void output()
    {
     cout<<money<<endl;
    }
    void getmoney(pesa *x,pesa *y)
    { int mommn,dadmn;
      cout<<"enter amount to take from mom"<<endl;
      cin>>mommn;

      if(mommn<=x->money)
      { money=money+mommn;
       x->money-=mommn; }
      else
     { cout<<"mom hase insufficient money to meet your requirement"<<endl;}
      cout<<"enter the money to take from dad"<<endl;
      cin>>dadmn;
      if(dadmn<=y->money)
       {money=money+dadmn;
	y->money-=dadmn; }
      else
      cout<<"dad hase insufficient money to meet your requirement"<<endl;
   }
    };
int main()
{   pesa mom,dad,son;
    clrscr();
      cout<<"enter money of mom"<<endl;
      mom.inputdata();
      cout<<"enter money of dad"<<endl;
      dad.inputdata();
      cout<<"enter money of son"<<endl;
      son.inputdata();
      son.getmoney(&mom,&dad);   //passing object as address
      cout<<"now money of son=";
      son.output();
      cout<<"money of mom=";
      mom.output();
      cout<<"money of dad=";
      dad.output();
      getch();
      return 0;
      }