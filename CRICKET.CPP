#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<stdio.h>
class cricket
{
   char name[20];
   int not_out,run,ining;
   float average;
   public:
   void input()
   {
      cout<<endl<<"Enter the name of player"<<endl;
      gets(name);
      cout<<endl<<"Enter run scored by "<<name<<endl;
      cin>>run;
      cout<<endl<<"Enter number of ining played by "<<name<<endl;
      cin>>ining;
      cout<<endl<<"ennter how much time "<<name<<" was not out"<<endl;
      cin>>not_out;
    }
    void Average()
     {

       average=run/ining;
     }
     void output()
      {
	cout<<endl<<name<<setw(9)<<run<<setw(7)<<ining<<setw(8)<<not_out<<setw(10)<<average;
      }
 };
 int main()
 {
    int i,n;
    clrscr();
    cout<<"enter number of player"<<endl;
    cin>>n;
    cricket obj[5];
    for(i=0;i<n;i++)
    {
      cout<<endl<<"enter record of "<<i+1<<" player"<<endl;
      obj[i].input();
      obj[i].Average();
    }

    cout<<endl<<"Name of player "<<" Runs "<<" inings "<<" not time "<<" Average ";
    for(i=0;i<n;i++)
    {
      obj[i].output();
    }
    getch();
    return 0;
  }


