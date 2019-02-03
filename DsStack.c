#include<stdio.h>
int main(){
 int i,stack[8],top=-1,fixed;
 int data[]={7,2,9,0,1,2,8};
 for(i=0;i<8;i++){
     if(top==-1)
		 stack[++top]=data[i];
	   else{ 
			  stack[++top]=data[i];
			 if(stack[top]>stack[top-1]){
             fixed=stack[top];
              do{
				    printf("\nGreater of %d is %d",stack[top-1],fixed);
					top=top-1;
			    }while(top!=0);
              top=top-1;
			  }
       
	   }
 }
return 0;
}