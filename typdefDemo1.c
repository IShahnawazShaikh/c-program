#include<stdio.h>
typedef int Integer;
void findPair(Integer *ar1,Integer num){
  Integer i,j,ar2[12],index=0;
  for(i=0;i<10;i++){
      for(j=0;j<10;j++){
	     if((ar1[i]+ar1[j])==num){
				ar2[index]=ar1[i];
				index++;
				ar2[index]=ar1[j];
				index++;
		 }
	  }
  }
  i=0;index=1;
  while(i<12){
	   printf("%d. Pair having sum %d ={%d,%d}\n",index,num,ar2[i],ar2[i+1]);
       i+=2;
	   index+=1;
	}
}
Integer main(){
Integer num=5,ar1[10]={4,2,6,7,5,1,9,6,3,0};
   findPair(ar1,num);
   return 0;
}

