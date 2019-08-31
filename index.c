#include<stdio.h>
int main(){
  int arr[6]={1,100,50,-51,1,1},i,j,k,sum1,sum2;
   for(i=1;i<6;i++){
	   sum1=0;sum2=0;
	   j=i;
	  k=i;
         while(1){
		       if(j>0){
				   j=j-1;
			        sum1=sum1+arr[j];
			   }
		       if(k<5){
				    k++;
			        sum2=sum2+arr[k];
			   }
			   if(j==0 && k==5)
				   break;
		 }
		 if(sum1==sum2)
			break;
   }
    printf("%d",i);
return 0;
}