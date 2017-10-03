//program to decimal from octal
#include<stdio.h>
#include<conio.h>
int main()
{ int n;
  clrscr();
  printf("enter octal number\n");
    scanf("%o",&n);
    printf("decimal equivalent of %o octal is %d",n,n);
    getch();
    return 0;
    }