//program to make menu of restaurant
#include<stdio.h>
#include<conio.h>
int main()
{int i;
clrscr();
do
{printf("\nselect your option");
 printf("\n1.veg birtyani\n2.chiken biryan\n3.chowmein\n4.burger\n5.water\n");
 scanf("%d",&i);
switch(i)
{ case 1:
  printf("\ncost of 1 kg veg biryani Rs160\n\n");
  break;
  case 2:
  printf("\ncost of 1 kg chicken biryani Rs200\n\n");
  break;
  case 3:
  printf("\ncost of 1 plate chowmeen Rs70\n\n");
  break;
  case 4:
  printf("\ncost of 1 burger Rs50\n\n");
  break;
  case 5:
  printf("\n 1 glass water Rs20\n\n");
  break;
  default:
   printf("\nyou have selected wrong option");
   }
  }
  while(i!=5);
  getch();
  return 0;
  }
