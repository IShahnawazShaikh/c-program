#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node* front=NULL;
struct Node* rear=NULL;
void enQueue(int data){
struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
newNode->data=data;
newNode->next=NULL;
if(rear==NULL){
   rear=newNode;
   front=newNode;
  return;
 }
 rear->next=newNode;
 rear=newNode;
}
void deQueue(){
	printf("dequeue=%d\n",front->data);
	front=front->next;
}
void display(){
printf("Data in QUEUE:\n");
struct Node* temp=front;
 while(temp!=NULL){
    printf("%d\n",temp->data);
    temp=temp->next;
  }
  free(temp);
}
int main(){
enQueue(10);
enQueue(11);
enQueue(12);
enQueue(13);
enQueue(14);
display();
deQueue();
deQueue();
display();
return 0;
}