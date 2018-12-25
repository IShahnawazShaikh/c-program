#include<stdio.h>
void result(float,int);
int main(){
	int R,f[]={-1,0,1,50,99,100,101},i,index1=0,index2=0,index3=0,conts=50,counter=0,n=3;
	 for(i=0;i<6*n+3;i++){
		  if(i<7){
			  ++counter;
			  if(f[index1]==101 || f[index1]==-1){
				  printf("\n%d. invalid",counter);
                 index1=index1+1;
			  }
              else if(f[index1]==0){
				   
				  printf("\n%d. Not QE",counter);
				  index1=index1+1;
			  }
			  else{
			  R=(conts*conts)-(4*f[index1]*conts); 
			  result(R,counter);
			  index1=index1+1;
			  }
		  }
    else if(i<=13 && i>6){
		if(f[index2]==50){index2=index2+1;}
    else{
		 ++counter;
		if(f[index2]==101 || f[index2]==-1){
				  printf("\n%d. invalid",counter);
                 index2=index2+1;
			  }
			  else{
			  R=(f[index2]*f[index2])-(4*conts*conts); 
			 result(R,counter);
			  index2=index2+1;
			  }
	}
	}
   else{
	   if(f[index3]==50){index3=index3+1;}
	    else{
			++counter;
	    	if(f[index3]==101 || f[index3]==-1){
				  printf("\n%d. invalid",counter);
                 index3=index3+1;
			}
			  else{
				R=(conts*conts)-(4*conts*f[index3]); 
			 result(R,counter);
			  index3=index3+1;
			  }
		}
     }
 }//loop
	printf("\nTotal=%d",counter);
	 return 0;
}
void result(float R,int counter){
	   if(R>0)
				  printf("\n%d. Real roots",counter);
	   else if(R==0)
				printf("\n%d. Real and Equal root",counter);
       else
			  printf("\n%d. Imaganinary root",counter);
}
