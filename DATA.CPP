#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class DATA
{
    char name[20],coarse[29],topper1[20],topper2[20],topper3[20];
    int roll;
    float total,mat,ch,p,c,ec,per,total1,mat1,ch1,p1,c1,ec1,per1;
    public:
   void topper()
    {
      strcpy(topper1,"shahnawaz shaikh");
      strcpy(topper2,"fais khan");
      strcpy(topper3,"kanoon");
      gotoxy(25,10);
      cout<<"1."<<topper1;
      gotoxy(25,11);
      cout<<"2."<<topper2;
      gotoxy(25,12);
      cout<<"3."<<topper3;
    }

    void input()
     {
       cout<<endl<<"Enter student name"<<endl;
       gets(name);
       cout<<endl<<"Enter students roll no"<<endl;
       cin>>roll;
       cout<<endl<<"Enter Branch name"<<endl;
       gets(coarse);
       sessional();
       sem_marks();
     }
     void details()
     {
	clrscr();
	gotoxy(25,8);
	cout<<endl<<"Your details"<<endl;
	gotoxy(25,10);
	cout<<endl<<"Name="<<name;
	gotoxy(25,12);
	cout<<endl<<"Roll number="<<roll;
	gotoxy(25,14);
	cout<<endl<<"Coarse="<<coarse;
      }
      int match()
      {
	 return roll;
      }
     void sessional()
      {
	 cout<<endl<<"Enter "<<name<<" I & II sessionals marks(MM=30)";
	 cout<<endl<<"Enter marks of C programming"<<endl;
	 cin>>c;
	 cout<<endl<<"Enter marks of physics"<<endl;
	 cin>>p;
	 cout<<endl<<"Enter marks of Chemistry"<<endl;
	 cin>>ch;
	 cout<<endl<<"Enter marks of Mathematic"<<endl;
	 cin>>mat;
	 cout<<endl<<"Enter marks of C Electronics"<<endl;
	 cin>>ec;
	 total=ec+ch+mat+c+p;
	 per=(total*2)/3;
      }
      void session()
      {

	clrscr();
	gotoxy(25,6);
	cout<<endl<<name<<" I & II SESSIONALS MARKS DETAILS(MM=30)"<<endl;
	gotoxy(25,8);
	cout<<endl<<"marks of C programming="<<c;
	gotoxy(25,9);
	cout<<endl<<"marks of physics="<<p;
	gotoxy(25,10);
	cout<<endl<<"marks of Chemistry="<<ch;
	gotoxy(25,11);
	cout<<endl<<"marks of mathematics="<<mat;
	gotoxy(25,12);
	cout<<endl<<"marks of electronics="<<ec;
	gotoxy(25,13);
	cout<<endl<<"total="<<total;
	gotoxy(25,14);
	cout<<endl<<"percentage="<<per;
      }
      void sem_marks()
       {
	 cout<<endl<<"Enter "<<name<<" II Semester marks(MM=60)";
	 cout<<endl<<"Enter marks of C programming"<<endl;
	 cin>>c1;
	 cout<<endl<<"Enter marks of physics"<<endl;
	 cin>>p1;
	 cout<<endl<<"Enter marks of Chemistry"<<endl;
	 cin>>ch1;
	 cout<<endl<<"Enter marks of Mathematic"<<endl;
	 cin>>mat1;
	 cout<<endl<<"Enter marks of C Electronics"<<endl;
	 cin>>ec1;
	 total1=ec1+ch1+mat1+c1+p1;
	 per1=(total1)/3;
       }
      void semester()
      {
	clrscr();
	gotoxy(25,6);
	cout<<endl<<name<<" II SEMESTER MARKS DETAILS(MM=60)"<<endl;
	gotoxy(25,8);
	cout<<endl<<"marks of C programming="<<c1;
	gotoxy(25,9);
	cout<<endl<<"marks of physics="<<p1;
	gotoxy(25,10);
	cout<<endl<<"marks of Chemistry="<<ch1;
	gotoxy(25,11);
	cout<<endl<<"marks of mathematics="<<mat1;
	gotoxy(25,12);
	cout<<endl<<"marks of electronics="<<ec1;
	gotoxy(25,13);
	cout<<endl<<"total="<<total1;
	gotoxy(25,14);
	cout<<endl<<"percentage="<<per1;
      }
};
int menu();
int main()
 {
   DATA top,obj[20];
   int roll_n,cat,i,x,x1,n=20,test=0;
    clrscr();
    cout<<endl<<"Enter the details of "<<n<<" students"<<endl;
    for(i=0;i<n;i++)
    {
       obj[i].input();
    }
    clrscr();
   do
     {

       cat=menu();
       men:
       test=0;
       switch(cat)
	{
	   case 35:
	   clrscr();
	   det:             //goto statement
	   gotoxy(25,12);
	   cout<<"Enter your roll number";
	   gotoxy(25,13);
	   cin>>roll_n;
	   for(i=0;i<n;i++)
	   {
	     if(obj[i].match()==roll_n)
	      {
		 ++test;
		 obj[i].details();
		 break;
	      }

	   }
	   if(test==0)
	    {  gotoxy(25,18);
	       cout<<"You have entered the wrong roll number";
	       goto det;
	    }

	   cout<<endl<<endl<<"Enter 1 for help line section"<<endl<<"enter 2 for exit"<<endl;
	   cin>>x;
	   if(x==1)
	   {
	     clrscr();
	     cat=menu();
	     goto men;
	  }
	  if(x==2)
	  {
	   break;
	  }
	   break;
	   case 36:

	   clrscr();
	   ses:              //goto statement
	   gotoxy(25,12);
	   cout<<"Enter your roll number";
	   gotoxy(25,13);
	   cin>>roll_n;
	   for(i=0;i<n;i++)
	   {
	     if(obj[i].match()==roll_n)
	      {
		 ++test;
		 obj[i].session();
	      }
	   }
	   if(test==0)
	    {
	      gotoxy(25,18);
	      cout<<"You have entered the wrong roll number";
	      goto ses;
	    }

	   cout<<endl<<endl<<"Enter 1 for help line section"<<endl<<"enter 2 for exit"<<endl;
	   cin>>x;
	   if(x==1)
	   {
	     clrscr();
	     cat=menu();
	     goto men;
	  }
	  if(x==2)
	  {
	   break;
	  }
	break;
	case 37:
	clrscr();
	   sem:              //goto statement
	   gotoxy(25,12);
	   cout<<"Enter your roll number";
	   gotoxy(25,13);
	   cin>>roll_n;
	   for(i=0;i<n;i++)
	   {
	     if(obj[i].match()==roll_n)
	      {
		 ++test;
		 obj[i].semester();
	      }
	   }
	   if(test==0)
	    {
	      gotoxy(25,18);
	      cout<<"You have entered the wrong roll number";
	      goto sem;
	    }

	   cout<<endl<<endl<<"Enter 1 for help line section"<<endl<<"enter 2 for exit"<<endl;
	   cin>>x;
	   if(x==1)
	   {
	     clrscr();
	     cat=menu();
	     goto men;
	  }
	  if(x==2)
	  {
	   break;
	  }
	  break;
	  case 38:
	  top.topper();
	   cout<<endl<<endl<<"Enter 1 for help line section"<<endl<<"enter 2 for exit"<<endl;
	   cin>>x;
	   if(x==1)
	   {
	     clrscr();
	     cat=menu();
	     goto men;
	  }
	  if(x==2)
	  {
	   break;
	  }
       }
	break;
       }while(cat!=39);
  getch();
  return 0;
  }

int menu()
 {

    char s;
    int x=25,y=7,i;
    gotoxy(25,8);
    cout<<"STUDENTS HELPLINE SECTION";
    gotoxy(25,10);
    cout<<"1.PERSONAL DETAILS";
    gotoxy(25,11);
    cout<<"2.SESSIONAL MARKS (2nd SEM)";
    gotoxy(25,12);
    cout<<"3.SEMESTER MARKS (2nd SEM)";
    gotoxy(25,13);
    cout<<"4.TOPPERS list( Ist Year)";
    gotoxy(25,14);
    cout<<"5.EXIT";
     for(i=0;i<200;i++)
       {
	  s=getch();
	  if(75==s)
	     {
	       gotoxy(x-1,y);
	       x--;
	     }
	  if(77==s)
	     {
	       gotoxy(x+1,y);
	       x++;
	     }
	 if(80==s)
	    {
	       gotoxy(x,y+1);
	       y++;
	    }
	if(72==s)
	    {
	       gotoxy(x,y-1);
	       y--;
	    }
	if(13==s)
	   {
	      clrscr();
	      break;
	   }
     }
    return (x+y);
 }

