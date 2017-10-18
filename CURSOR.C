#include<stdio.h>
#include<conio.h>
int main()
{int i,x=20,y=20,p;
   clrscr();
   gotoxy(x,y);
   for(i=0;i<50;i++)
   {  p=getch();
      if(75==p)
       {gotoxy(x-1,y);
	 x--;}
      if(72==p)
      {gotoxy(x,y-1);
	 y--;}
	 if(80==p)
	 {gotoxy(x,y+1);
	   y++;}
	   if(77==p)
	   {gotoxy(x+1,y);
	    x++;}
      }
	 getch();
	 return 0;
	 }
