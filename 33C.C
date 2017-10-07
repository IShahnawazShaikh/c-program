//program to swap 2 number using * and / operator
#include<stdio.h>
#include<conio.h>
int main()
{ int a,b;
   clrscr();
   printf("enter two number\n");
   scanf("%d%d",&a,&b);
   printf("\nBefore swaping\nfirst number=%d\nsecond number=%d",a,b);
   a=a*b;
   b=a/b;
   a=a/b;
   printf("\nAfter swaping\nfirst number=%d\nsecond number=%d",a,b);
   getch();
   return 0;
   }