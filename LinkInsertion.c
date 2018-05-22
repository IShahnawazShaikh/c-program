//program in C to perfom insertion in singly linked list
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *link;
};
struct Node * head=NULL;
void insertBeg(int data){
	struct Node *temp=malloc(sizeof(struct Node));
	if(head==NULL){
    temp->data=data;
	temp->link=NULL;
	head=temp;
	}
	else{
		temp->data=data;
		temp->link=head;
		head=temp;
	}
}
void insertTail(int data){
 struct Node * temp=malloc(sizeof(struct Node));
 temp->data=data;
 temp->link=NULL;
 if(head==NULL){
	 head=temp;
 }
 else{
	 struct Node *ptr=head;
	 while(ptr->link!=NULL){
		 ptr=ptr->link;
	 }
	     ptr->link=temp;
    }
}

void nPosition(int data,int pos){
  int i;
	struct Node *ptr,*temp;
    temp=malloc(sizeof(struct Node));
	temp->data=data;
	temp->link=NULL;
	if(pos==1){
		temp->link=head;
		head=temp;
	}
	ptr=head;
  for(i=1;i<pos-1;i++){
	  ptr=ptr->link;
  }
  if(ptr==NULL){
	  printf("Not enough Node to insert at %d",pos);
  }
  else{
	  temp->link=ptr->link;
	  ptr->link=temp;
  }
}
void printElement(){
	struct Node * temp=head;
	while(temp!=NULL){
		printf("[%d]\t",temp->data);
		temp=temp->link;
	}
}
int main()
{ 
	 int n,choice,data,pos;
	 while(1){
		    printf("\n1.Insert Node at Begining\n2.Insert Node At last\n3.Insert Node at nth position\n4.Display Nodes\n5.Exit");
            printf("\nEnter Your choice\n");
			scanf("%d",&choice);
			switch(choice){
			case 1:
		   printf("\nEnter the Data part of Node to be insert at begining\n");
		   scanf("%d",&data);
            insertBeg(data);
			break;
			case 2:
			printf("\nEnter the Data part of Node to be insert at Last\n");
		    scanf("%d",&data);
            insertTail(data);
			break;
			case 3:
			printf("\nEnter the Data part and Position To insert  New Node\n");
		    scanf("%d%d",&data,&pos);
            nPosition(data,pos);
			break;
			case 4:
            printElement();
			break;
			case 5:
			exit(0);
			}
	 }
	return 0;
}
   