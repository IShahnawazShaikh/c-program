//program to reverse digit
#include<stdio.h>
#include<conio.h>
#include<dos.h>
int main()
{ unsigned int cp,y,n,rev=0;
   clrscr();
   printf("enter a digit to be reverse\n");
   scanf("%d",&n);
   cp=n;
   while(n>=1)
   {  y=n%10;
      rev=(rev*10)+y;
      n=n/10;
   }
     textcolor(RED);
     cprintf("\nReverse of %d is %d",cp,rev);
     getch();
     return 0;
     }

