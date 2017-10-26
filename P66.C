#include<stdio.h>
#include<conio.h>
int multiply(int,int);
int sum(int,int);
int mul(int,int);
int main()
{  int m=6,n=3;
   clrscr();
   printf("\nmultiplication=%d\n",multiply(m,n));
   printf("\nsum+multiply+mul=%d",multiply(6,mul(2,sum(m,n))));
   textcolor(BLUE);
   cprintf("\ncoded by Shahnawaz shaikh");
   getch();
   return 0;}
int multiply(int x,int y)
{int p;
p=x*y;
return p;}
int sum(int z,int z1)
{int s=0;
  s=z+z1;
  return s;}
int mul(int w,int q)
{int m=w*q;
  return m;}