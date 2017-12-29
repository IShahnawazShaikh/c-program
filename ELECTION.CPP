#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
int main()
{
  int i,j,k,spoilt_ballot=0,test,count[5]={0};
  clrscr();
  for(i=1;i<=5;i++)
  cout<<endl<<"enter "<<i<<" to vote for candidate "<<i;
  cout<<endl<<"enter negetive number for no vote"<<endl;
  while(1)
  {
     cin>>test;
     for(i=1;i<=5;i++)
     {
	if(test==i)
	  {
	   count[i-1]++;
	  }
     }
      if(test>5)
      ++spoilt_ballot;
      if(test<0)
      break;
   }

   for(k=1;k<=5;k++)
    {
      cout<<"candidate "<<k<<" "<<setw(5);
    }
    cout<<endl;
    for(j=0;j<5;j++)
   {
     cout<<setw(9)<<" "<<count[j];
   }
   cout<<endl<<"spoilt ballots="<<spoilt_ballot;
   getch();
   return 0;
 }
