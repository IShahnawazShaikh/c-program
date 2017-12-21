#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class hospital
{
   char name[20],name2[20],mob[11];
   float charge;
   int id,ward;

   public:
   int match()
     {
       return id;
     }
   void input_doctor()
   {
      cout<<"Name"<<endl;
      gets(name);
      cout<<endl<<"Enter Id number of doctor"<<endl;
      cin>>id;
      cout<<endl<<"Mobile number"<<endl;
      gets(mob);
   }
   void input_patient()
   {
      cout<<endl<<"Name"<<endl;
      gets(name2);
      cout<<endl<<"Fees charged"<<endl;
      cin>>charge;
      cout<<endl<<"Enter ward number"<<endl;
      cin>>ward;
   }
   void database()
   {

     cout<<endl<<"Name of doctor="<<name;
     cout<<endl<<"mobile number="<<mob;
     cout<<endl<<"Id of the doctor="<<id;
   }
   void database_pat(int x)
    {

      cout<<endl<<"Name of patient="<<name2;
      cout<<endl<<"Ward number of patient="<<ward;
      cout<<endl<<"Fees charged of this patient="<<charge;
      cout<<endl<<"Id of doctor who is treating="<<x;
   }
 };
 int main()
 {
     hospital obj[20];
     hospital obj2[20];
     int n,dc,pt,s=0,i,j;
     clrscr();
     cout<<endl<<"Enter the number of doctor in the hospital"<<endl;
     cin>>dc;
     cout<<"Enter the number of patient in the hospital"<<endl;
     cin>>pt;
     for(i=0;i<dc;i++)
     {
       cout<<endl<<"Enter details of "<<i+1<<" doctor"<<endl;
       obj[i].input_doctor();
     }
     for(j=0;j<pt;j++)
     {
       cout<<endl<<"Enter details of "<<j+1<<" patient"<<endl;
       obj2[j].input_patient();
     }
     cout<<endl<<"Enter 1 for doctors DATABASE and 2 for patient DATABASE"<<endl;
     cin>>n;
     switch(n)
     {
       case 1:
       clrscr();
       for(i=0;i<dc;i++)
	{
	  obj[i].database();
	}
	break;
	case 2:
	clrscr();
	for(i=0;i<pt;i++)
	 {
	   if(s==dc)
	   {
	     s=0;
	   }

	   obj2[i].database_pat(obj[s].match());
	   s++;
	 }
	 break;

	 default:
	 cout<<"this data is not available";
      }
     getch();
     return 0;
   }





