/* program to print the pattern
			 *
		       * *
		     * * *
		   * * * *


		   */

#include <stdio.h>
#include<conio.h>
#include<dos.h>
int main()
{int i,j,n;
	 clrscr();
	printf("enter number to print pattern\n");\
		scanf("%d",&n);
	for(i=0;i<n;i++)
	{for(j=0;j<n;j++)
	    {if(i+j>=n/2+n/2)
			{ delay(100);
			 printf("*");}
	else
			{printf(" ");}

		}
		printf("\n");
	}    printf("coded by Shahnawaz shaikh");
	    getch();
	return 0;
}
