#include<stdio.h>
int main()
{
	int n,temp,i,j,begining,end,Mid,Element;
	printf("Enter number of Element\n");
	scanf("%d",&n);
	int Binary[n];
	printf("\nEnter %d elemnts in the Array\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&Binary[i]);
	}
   for(i=0;i<n;i++){
	  for(j=0;j<n-1;j++){
	   if(Binary[j]>Binary[j+1]){
		  temp=Binary[j];                                   //Bubble Sorting
		  Binary[j]=Binary[j+1];
		  Binary[j+1]=temp;
		}
	}
}
printf("\nElements in Sorted Form are:");
for(i=0;i<n;i++){
		printf("\t %d",Binary[i]);
	}
     begining=0;
      end=n-1;
	Mid=(begining+end)/2;
	printf("\nEnter the Elements To be Searched\n");
	scanf("%d",&Element);
	int count=0;
	while(begining<=end){
		count=Mid;
		if(Element==Binary[Mid]){
			printf("%d is present at %d",Element,Mid);
			break;
		}
		else if(Binary[Mid]>Element){
			begining=0;
			end=Mid-1;
			Mid=(begining+end)/2;
			if(count==Mid&Binary[Mid]!=Element)
			{
				printf("%d is Not Found",Element);
			}
		}
		else if(Binary[Mid]<Element){
			begining=Mid+1;
			end=n-1;
			Mid=(begining+end)/2;
			if(count==Mid&Binary[Mid]!=Element)
			{
				printf("%d isNot Found",Element);
			}
		}
	}
	return 0;
}

