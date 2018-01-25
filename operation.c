#include<stdio.h>
int main()
{
	int ar[10],i,index,value,choice,t=0,n;
	printf("Enter the number of element in the array\n");
	scanf("%d",&n);
	printf("\nEnter %d element of array\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("1.INSERTION\n2.DELETION\n");
	printf("Enter your choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		printf("Enter the number of index at which value is inserted\n");
        scanf("%d",&index);
		printf("Enter the value to be inserted\n");
		scanf("%d",&value);
		t=ar[index];
		ar[index]=value;
		ar[n]=t;
		for(i=n;i>index+1;i--)
		{
			ar[i]=(ar[i]+ar[i-1])-(ar[i-1]=ar[i]);
		}
		for(i=0;i<n+1;i++)
		{
			printf("%d\t",ar[i]);
		}
		break;
		case 2:
			printf("Enter the element to be deleted\n");
		    scanf("%d",&value);
			for(i=0;i<n;i++)
		{
				if(ar[i]==value)
                 index=i;
		}
		for(i=0;i<n;i++)
		{
			if(i!=index)
			{
				++t;
				printf("%d\t",ar[i]);
			}
		}
	}
}


