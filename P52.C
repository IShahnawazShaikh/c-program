//program to print the pattern
#include<stdio.h>
#include<conio.h>
int main()
{int i,j,n;
 clrscr();
 printf("enter number to print pattern\n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {for(j=1;j<=i;j++)
 {printf("%d\t",j);}
  printf("\n");}
   printf("\ncoded by shahnawaz shaikh");
   getch();
   return 0;}
