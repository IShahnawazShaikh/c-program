/*program to print the holow diamond
			  *
			 *  *
			*     *
			  *   *
			    *
			     */


#include<stdio.h>
#include<conio.h>
int main()
{
  int n,i,j;
  clrscr();
  printf("enter the number of term\n");
  scanf("%d",&n);
  if(n%2==0)
  n++;

	 for(i=0;i<n;i++)
	  {for(j=0;j<n;j++)
		{if(i+j==n/2||j-i==n/2||i-j==n/2||i+j==n/2+n/2+n/2)
			{printf("*");}
	else
			{printf(" ");}

		}
		printf("\n");
	}
	getch();
 return 0;
}
