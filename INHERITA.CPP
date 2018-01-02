#include<stdio.h>
#include<iostream.h>
#include<conio.h>
class person
{
   protected:
   char roll[20],name[20];
   public:
   void input()
   {
      cout<<endl<<"Enter name of person"<<endl;
      gets(name);
      cout<<endl<<"Enter roll number"<<endl;
      gets(roll);
   }
   void  putdata()
    {
      cout<<endl<<"Name="<<name;
      cout<<endl<<"Roll number="<<roll;
    }
};
class student:public person
{
   protected:
   int m[5],total,eligible;
   float per;
   public:
   student()
    {
       total=0;
    }
   void getmarks()
   {
      input();
      int i;
      for(i=0;i<5;i++)
       {
	    cout<<endl<<"Enter marks of "<<i+1<<" subject"<<endl;
	    cin>>m[i];
	    total+=m[i];
       }
      per=total/5;
      if(per>=75)
      {
	eligible=1;
      }
      else
      {
	 eligible=0;
      }

   }
 };
 class sports:public student
 {

     public:
     void details()
     {
	putdata();
	cout<<endl<<"total marks="<<total;
	cout<<endl<<"percentage="<<per;
	if(eligible==1)
	{
	  cout<<endl<<"status=Eligible for both indoor and outdoor game";
	}
	else
	{
	  cout<<endl<<"status=Eligible for only indoor game";
	}
      }

 };
 int main()
 {
    sports obj[2];
    int i;
    clrscr();
    for(i=0;i<2;i++)
    {
      obj[i].getmarks();
    }
    clrscr();
    for(i=0;i<2;i++)
    {
      obj[i].details();
    }
    getch();
    return 0;
 }



