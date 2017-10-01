#include<conio.h>
#include<stdio.h>
int main()
{int a[20],i,n,s;
   clrscr();
   printf("enter number of element in array\n");
   scanf("%d",&n);
   printf("enter %d element of array\n",n);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
  textcolor(BLUE);
  cprintf("enter a number to cheack the number present in array or not\n");
  scanf("%d",&s);
  for(i=0;i<n;i++)
  {  if(a[i]==s)
      { textcolor(GREEN);
      cprintf("%d is present in array",s);
     break;}
     else if(i==n-1&&a[i]!=s)
     {textcolor(RED);
     cprintf("%d is not present in array",s);}
  }
  getch();
  return 0;
  }
