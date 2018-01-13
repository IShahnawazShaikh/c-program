#include<stdio.h>
int main()
{
	  int ar[20],i,n,search,count=0;
	  printf("enter number of terms in the array\n");
	  scanf("%d",&n);
	  printf("\nEnter the %d elemnet of array\n",n);
	  for(i=0;i<n;i++)
	{
		  scanf("%d",&ar[i]);
	}
	printf("\nEnter the Element to be searched\n");
     scanf("%d",&search);
	 for(i=0;i<n;i++)
	{
		 if(search==ar[i])
			 ++count;
	}
	if(count==0)
		printf("%d is not present in array",search);
	else
	{  printf("%d is present in array\n",search);
	    printf("number of times %d is present are=%d",search,count);
	}
	return 0;
}
	

