//program to find binary equivalent of decimal number
#include<conio.h>
#include<stdio.h>
int main()
{  int no,bn=0,i=1,x,n;
  clrscr();
  printf("enter decimal number to convert binary\n");
   scanf("%d",&n);
   no=n;
   while(n>=1)
   {
      x=n%2;
      n=n/2;
      bn=bn+(x*i);
      i=i*10;
   }
   printf("\nBinary equivalent of %d is %d",no,bn);
   getch();
   return 0;
   }

