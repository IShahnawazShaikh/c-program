//Program to implement Queue datastructure
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
 int size,i,REAR=0,FRONT=0,QUE[10],item,choice;
 clrscr();
 printf("\nEnter the size of queue which should be less than 10\n");
 scanf("%d",&size);
 while(1)
 {
   printf("\n1.ENQUEUE\n2.DEQUEUE\n3.DETAILS\n4.EXIT\n");
   printf("Enter your choice\n");
   scanf("%d",&choice);
   switch(choice)
   {
     case 1:
     if(REAR==size)
     {
       printf("\n\nQueue if full\n");
     }
     else
     {
       if(FRONT==0)
       {
	 FRONT+=1;
       }
     REAR+=1;
     printf("\nEnter the element to be enqueued\n");
     scanf("%d",&item);
     QUE[REAR]=item;
    }
    break;
    case 2:
    if(FRONT==0)
    {
      printf("\nQueue is empty");
    }
    else
    {
      if(REAR==FRONT)
      {
       REAR=0;
       FRONT=0;
       printf("\nFRONT=%d and REAR=%d",FRONT,REAR);
      }
     else
     {
      item=QUE[FRONT];
      FRONT+=1;
     }
   }
    break;
    case 3:
    printf("\nElements in the Que are:\n");
    for(i=FRONT;i<=REAR;i++)
    {
      printf("%d\t",QUE[i]);
    }
    break;
    case 4:
    exit(0);
   }
 }
 getch();
 return 0;
}

