#include<stdio.h>
int main(){
int ar[10]={9,28,-21,2,-5,-1,-10,3,-5,-1},i,j,index,p;
for(i=0;i<10;i++){
   if(ar[i]>=0){
	  p=index=i;
	   break;
   }
}
for(i=0;i<9;i++){
	index=p;
   for(j=0;j<10-i;j++){
      if(ar[j]>=0){
	     if(ar[index]>ar[j]){
	    ar[j]=(ar[j]+ar[index])-(ar[index]=ar[j]);
		index=j;
	    }
		else{index=j;}
	  }
   }
}
for(i=0;i<10;i++)
	 printf("%d\t",ar[i]);
return 0;
}