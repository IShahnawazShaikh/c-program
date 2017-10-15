//program to print the pattern
#include<stdio.h>
#include<conio.h>
#include<dos.h>
int main()
{int i,j,n;
 clrscr();
 printf("enter a number to which pattern\n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {for(j=1;j<=i;j++)
 {  delay(1000);
  textcolor(i);
   cprintf("%d",i);}
  printf("\n");}
   printf("\ncoded by shahnawaz shaikh");
   getch();
   return 0;}
