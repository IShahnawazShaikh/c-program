#include<iostream.h>
#include<conio.h>
#include<string.h>
class LAB
{ char name[20];
  int qty,price;
  public:
  void input()
  { cout<<"enter the name of item"<<endl;
    cin>>name;
    cout<<"enter the quantity of item"<<endl;
    cin>>qty;
    cout<<"enter the price of item"<<endl;
    cin>>price;
  }
  void issue()
  {    qty--;
	cout<<"item is issued";
  }
    void recieve()
    {
      qty++;
    }

   void status()

   {
     cout<<endl<<" "<<name<<"    "<<qty<<"   "<<price<<endl;

   }
   char * ret()
   {
    return name;
   }
};
void func();
int main()
{
  LAB obj[10];
  char nmr[20],nmi[20];
  int i,n,c=0;
  clrscr();
   do {
      func();
      cin>>n;
      switch(n)
    {
      case 1:
      obj[c].input();
      c++;
      break;
      case 2:
      cout<<"enter the item to be issued"<<endl;
      cin>>nmi;
      for(i=0;i<c;i++)
     {
      if(strcmp(nmi,obj[i].ret())==0)
      {
	obj[i].issue();
	break;
      }
    }
       if(i==c)
       {
	cout<<"item is not available";
       }
     break;
     case 3:
     cout<<"enter the item to recieved"<<endl;
     cin>>nmr;
     for(int i=0;i<c;i++)
     {
     if(strcmp(nmr,obj[i].ret())==0)
     {   obj[i].recieve();
	 break;
     }
    }
     if(i==c)
     {
      cout<<"the item is not accepptable";
      }
     break;
     case 4:
     cout<<endl<<"--------------------------------------------";
     cout<<endl<<"    "<<"name"<<"  "<<"quantity"<<"  "<<"price";
     cout<<endl<<"---------------------------------------------";
     for(i=0;i<c;i++)
     {
       obj[i].status();
     }
     break;

     case 5:
     cout<<"see you soon";
     break;
    }

  } while(n!=5);
   getch();
   return 0;
 }
 void  func()
  { cout<<endl<<"*******Choose an option*******"<<endl;
    cout<<"1.Add item"<<endl<<"2.Issue item"<<endl<<"3.Recieve item"<<endl<<"4.status"<<endl<<"5.exit";
   }



