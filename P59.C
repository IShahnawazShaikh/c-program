#include <stdio.h>
#include<conio.h>
int main()
{int n,i,j;
clrscr();
printf("enter a number");
scanf("%d",&n);
if(n%2==0)
{n=n+1;}
for(i=0;i<n;i++)
{for(j=0;j<2*n-1;j++)
 {if(i+j==n/2+n/2||i==n/2*2||j-i==n/2*2)
			{printf("*");}
	else
			{printf(" ");}
		}
		printf("\n");
	}
	 getch();
	return 0;
}
