#include<stdio.h>
int main()
{
	  int ar[10]={0,1,1,0,1,0,0,0,1,0},i,k=0,j,l=0;
	   for(i=0;i<10;i++)
	     {
		     if(ar[i]==0)
				 k++;
			 else
				 l++;
		 }
		 for(i=0,j=l;i<k,j<10;i++,j++)
	      {
			   ar[i]=0;
			   ar[j]=1;
		  }
		  for(i=0;i<10;i++)
	        {
			     printf("%d\t",ar[i]);
			}
			return 0;
}
			   
			    
			  
		    