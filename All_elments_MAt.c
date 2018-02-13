#include <stdio.h>
int main()
{
	int r,choice,i,j,temp=0,x=0;
	printf("Enter the number rows OR column in square matrix\n");
	scanf("%d",&r);
	int array[r][r];
	printf("Enter %dx%d elements of matrix\n",r,r);
	for(i=0;i<r;i++)
	 {
		 for(j=0;j<r;j++)
		    {
			     scanf("%d",&array[i][j]);
			}
	 }
	 printf("\nMatrix is:\n");
	 for(i=0;i<r;i++)
	 {
		  for(j=0;j<r;j++)
		    {
			     printf("%d\t",array[i][j]);
			}
			printf("\n");
	 }
	 printf("\n1.Elements of each diagonals\n2.Elements of each rows\n3.Elements of each columns\n");
	 printf("Enter your your choice\n");
	 scanf("%d",&choice);
    switch(choice)
	 {
	   case 1:
       printf("\nElements of first diagonal are:\n");
		for(i=0;i<r;i++)
		  {
			for(j=0;j<r;j++)
		      {
			      if(i==j)
				  printf("[%d]\t",array[i][j]);			
			   }
		  }
	   if(r%2==0)
		 {
			printf("\nElements of second diagonal are\n");
			for(i=0;i<r;i++)
		     {
			   for(j=0;j<r;j++)
				{
				   if(i+j==(r/2+r/2)-1)
				   printf("[%d]\t",array[i][j]);
		       }
			}
		}
   else
	{
       printf("\nElements of second diagonal are\n");
	   for(i=0;i<r;i++)
	    {
		  for(j=0;j<r;j++)
			{
		       if(i+j==(r/2)+r/2)
			   printf("[%d]\t",array[i][j]);
		    }
		}
	}
    break;
	case 2:
     temp=r;
	 while(temp!=0)
	   {
		 x++;
         printf("\nElements of %d row: ",x);			
			for(i=0;i<r;i++)
		     {
			    for(j=0;j<r;j++)
				 {
				    if((r-temp)==i)
				     printf("[%d]\t",array[i][j]);
				 }
			}   
			--temp;
	   }
	break;
    case 3:
	temp=r;
    while(temp!=0)
	 {
	   x++;
       printf("\nElements of %d column: ",x);			
		for(i=0;i<r;i++)
		 {
		   for(j=0;j<r;j++)
			 {
				if((r-temp)==j)
			     printf("[%d]\t",array[i][j]);
			  }
	   	 }   
		--temp;
	  }
    break;
	default :
    printf("\nYou have Enter wronh choice\n");
   }            //(switch close)
    return 0;
}
