#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
	struct Node *next;
};
struct Node *head=NULL;
void push(int data){
struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
 if(!newNode){
   printf("Heap Overflow\n");
   return;
 }
 newNode->data=data;
 newNode->next=head;
 head=newNode;
 printf("%d is inserted\n",data);
}
void display(){
printf("Stack:\n");
	struct Node *temp=head;
	while(temp!=NULL){
		printf("%d\n", temp->data);
		temp=temp->next;
	}
}
void pop(){
	struct Node* top=head;
	if(top==NULL){
		printf("Stack is Underflow\n");
		return;
	}
    printf("%d is poped\n",top->data);
	head=top->next;
	free(top);
}
int main(){	
int element,choice;
while(1){
printf("Enter your operation\n");
printf("1.push an element\n 2.pop an element\n 3.display element\n 0.exit\n");
scanf("%d",&choice);
switch(choice){
	case 1:
	printf("enter element to Push\n");
	scanf("%d",&element);
	push(element);
	break;
	case 2:
	pop();
	break;
	case 3:
	display();
	break;
	case 0:
	exit(0);
	default:
	printf("Enter correct option\n");
  }
}
return 0;
}