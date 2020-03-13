#include <stdio.h>
#include<stdlib.h>
int main(void) {
    int T,i,j,N;          
   scanf("%d",&T);
   if(T<1 || T>=1000)
   exit(0);
   while(T--){
       scanf("%d",&N);  //size of array
       int A[N];
       int B[N];
       for(i=0;i<N;i++)
       scanf("%d",&A[i]);
       for(i=0;i<N;i++){
       	   j=i+1;
	      while(A[i]==A[j] && j< N){
	      	j++;
	      }
	      B[i]=N-j;
	   }
	   for(i=0;i<N;i++)
       printf("%d\n",B[i]);
   }
	return 0;
}

