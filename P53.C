//program to print the pattern
#include<stdio.h>
#include<conio.h>
int main()
{int i,j;
 clrscr();
 for(i=1;i<=5;i++)
 {for(j=1;j<=i;j++)
 {if(i%2!=0)
  printf("%d",i);
  else

 printf("%d",j);}
  printf("\n");}
   printf("\ncoded by shahnawaz shaikh");
   getch();
   return 0;}
