/*print the pattern
  *
  * *
  * * *
  * * * *
  */
#include<stdio.h>
#include<conio.h>
#include<dos.h>
int main()
{ int n,i,j;
   clrscr();
   printf("enter a number to which pattern is printed\n");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    { for(j=1;j<=i;j++)
      {textcolor(i);
      cprintf("*");}
      printf("\n");
    }
    getch();
    return 0;
    }
