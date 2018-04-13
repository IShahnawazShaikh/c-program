#include <stdio.h>
int main()
{
	int i,j,k,multiply2[3][3],multiply[3][3],sum=0,sum2=0,transpose[3][3],matrix[3][3]={ 
		                                {0,1,0},
		                                {0,0,1},
		                                {0,0,0}
	                                };
	printf("Matrix to find indegree and outdegree is:\n");
   for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					printf("%d\t",matrix[i][j]);
				}
				printf("\n");
	      }
		  printf("\nTranspose of Matrix is:-\n");
		  for(i=0;i<3;i++){
			  for(j=0;j<3;j++){
				  transpose[i][j]=matrix[j][i];
				  printf("%d\t",transpose[i][j]);
			  }
			  printf("\n");
			}
	for(i=0;i<3;i++){
	  for(j=0;j<3;j++){
		 for(k=0;k<3;k++){
			 sum = sum + matrix[i][k]*transpose[k][j];
			  sum2=sum2+transpose[i][k]*matrix[k][j];
		 }
		 multiply[i][j]=sum;
		 multiply2[i][j]=sum2;
		 sum=0;
		 sum2=0;
	  }
	}
	printf("\nMatrix after Matrix*transpose:\n");
	for(i=0;i<3;i++){
			  for(j=0;j<3;j++){
				  printf("%d\t",multiply[i][j]);
			  }
			  printf("\n");
	}
	printf("\nMatrix after transpose*Matrix\n");
	for(i=0;i<3;i++){
			  for(j=0;j<3;j++){
				  printf("%d\t",multiply2[i][j]);
			  }
			  printf("\n");
	}
	char ch='A';
   for(i=0;i<3;i++){
	   for(j=0;j<3;j++){
		   if(i==j)
		   {
			    printf("\nIndegree of %c =%d",ch+i,multiply2[i][j]);
				printf("\nOutdegree of %c=%d",ch+i,multiply[i][j]);
		   }
	   }
   }
	return 0;
}
