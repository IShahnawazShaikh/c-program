/*program to print the sum of series

   1/1+1/2+1/3+...+1/n*/


#include<stdio.h>
#include<conio.h>
int main()
{int n,i;
 float sum=0;
 clrscr();
 printf("Enter a number to print the series\n");
 scanf("%d",&n);

 for(i=1;i<=n;i++)
 {sum=sum+1/(float)i;
  }
  printf("sum os series=%f",sum);
  printf("\ncoded by shahnawaz shaikh");
   getch();
   return 0;}
