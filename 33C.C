//program to swap number in 1 line
#include<stdio.h>
#include<conio.h>
int main()
{   int a,b;
    clrscr();
    printf("enter two number\n");
    scanf("%d%d",&a,&b);
    printf("Before swaping\n");
    printf("first numeber=%d\nSecond number=%d",a,b);
    a=(a+b)-(b=a);  //swaping
    printf("\n\nAfter swaping\n");
    printf("first numeber=%d\nSecond number=%d",a,b);
      getch();
      return 0;
   }
