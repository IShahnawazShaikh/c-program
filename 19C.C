//program to convert decimal from hexadecimal
#include<stdio.h>
#include<conio.h>
int main()
{ int n;
  clrscr();
  printf("enter hexadecimal number\n");
    scanf("%x",&n);
    printf("decimal equivalent of %x hexadecimal is %d",n,n);
    getch();
    return 0;
    }