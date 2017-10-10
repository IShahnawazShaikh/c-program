/*program to print the pattern
     *****
     *	 *
     * 	 *
     *	 *
     *****

     */

#include<stdio.h>
#include<conio.h>
int main()
{int n,i,j;
 clrscr();

 printf("enter a number to print the pattern\n");
 scanf("%d",&n);
  if(n%2==0)
  {
  n=++n;
  }
 for(i=0;i<n;i++)
 {for(j=0;j<n;j++)

 { if(i==0||j==0||i==n/2*2||j==n/2*2)
   {printf("*");}
   else
   {printf(" ");}
 }
  printf("\n");
}
   printf("\ncoded by shahnawaz shaikh");
   getch();
   return 0;
   }
