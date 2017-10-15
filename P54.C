//program to print the pattern
#include<stdio.h>
#include<conio.h>
int main()
{int n,i,j;
 clrscr();
 printf("enter any number\n");
 scanf("%d",&n);
 if(n%2==0)
 n=n+1;
 for(i=0;i<n;i++)
 {for(j=0;j<n;j++)

 { if(i==0||i==n/2*2||i==j)
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
