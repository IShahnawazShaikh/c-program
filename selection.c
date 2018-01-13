//program to implement selection sorting
#include<stdio.h>
int main()
{
	int ar[10],i,j;
	printf("Enter the element of array\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=1+i;j<10;j++)
		{
			    if(ar[i]>ar[j])
				ar[i]=(ar[i]+ar[j])-(ar[j]=ar[i]);
		}
	}
	printf("\nSorted elements are:\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",ar[i]);
	}
	return 0;
}