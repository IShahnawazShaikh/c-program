#include<stdio.h>
int main(){
int n,i,j,l,remain,window,p,pointer=0;;
 printf("Enter size of array\n");
 scanf("%d",&n);
 int ar[n];
 printf("enter the %d element of array\n",n);
 for(i=0;i<n;i++){
  scanf("%d",&ar[i]);
 }
 printf("\nenter the size of the window:\n");
 scanf("%d",&window);
 int windowArray[window];
 int greatestArray[n/window];
 remain=n;
 for(i=0;i<n;i++){
	 p=0;
  if(window<=remain){
      for(j=i;j<window+i;j++){
	     windowArray[p]=ar[j];
		 p++;
		 remain=remain-1;
	  }
	  i=windowArray[0];
	 printf("\nwindow-%d:\n",pointer+1);
	  for(l=0;l<p;l++){
      if(windowArray[l]>i)
		  i=windowArray[l];
	    printf("%d\t",windowArray[l]);
	 }
	 printf("Max=%d\n",i);
	 greatestArray[pointer]=i;
	 pointer+=1;
	 i=j-1;
   }

 }
 printf("Result:\n");
for(i=0;i<n/window;i++)
	 printf("%d\t",greatestArray[i]);
return 0;
}