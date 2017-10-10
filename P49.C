/*program to print the pattern

	   *        *
	     *    *
	       *
	     *   *
	   *       *

    */

#include<stdio.h>
#include<conio.h>
int main()
{int n,i,j;
 clrscr();
 printf("enter the value to print the pattern\n");
 scanf("%d",&n);
 if(n%2==0)
 {n=n+1;}
 for(i=0;i<n;i++)
 {for(j=0;j<n;j++)
 {if(i==j||i+j==n/2*2)
  {printf("*");}
  else
   {printf(" ");}
  }
   printf("\n");
   }
   printf("\ncoded by shahnawaz shaikh");
   getch();
   return 0;}
