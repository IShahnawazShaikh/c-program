#include<stdio.h>
#include<conio.h>
int main()
{  unsigned int total;
   int value,x;
   clrscr();
   printf("Enter total amount\n");
   scanf("%d",&total);
   printf("\nEnter the value of note u want to begin\n");
   scanf("%d",&value);
   switch(value)
  {
     case 100:
      x=total/100;
      printf("\nno of note of 100 is reuired =%d",x);
      total=total%100;
      case 50:
      x=total/50;
      printf("\nno of note of 50 is reuired =%d",x);
      total=total%50;
      case 20:
      x=total/20;
      printf("\nno of note of 20 is reuired =%d",x);
      total=total%20;
      case 10:
      x=total/10;
      printf("\nno of note of 10 is reuired =%d",x);
      total=total%10;
      case 5:
       x=total/5;
      printf("\nno of note of 5 is reuired =%d",x);
      total=total%5;
      case 2:
      x=total/2;
      printf("\nno of note of 2 is reuired =%d",x);
      total=total%2;
      case 1:
      printf("\n1 rupee required is =%d",total);
     break;

      }
  getch();
  return 0;
  }






