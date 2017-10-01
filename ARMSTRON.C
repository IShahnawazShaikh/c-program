#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{ int no,n,sum=0,y,i=0;
  clrscr();
  printf("enter any number\n");
  scanf("%d",&n);
  no=n;
  while(no>=1)
  {i=i++;
  no=no/10;
  }
  no=n;
  while(no>=1)
  { y=no%10;
    sum=sum+pow(y,i);
     no=no/10;
  }
  if(sum==n)
  {printf("\nthe number is armstrong");}
  else
  {printf("\nthe number is not armstrong");}
  getch();
  return 0;
  }
