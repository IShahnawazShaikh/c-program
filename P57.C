#include <stdio.h>
#include<conio.h>

int main()
{int i,j,n;
  clrscr();
	printf("enter number to print pattern\n");\
		scanf("%d",&n);
		if(n%2==0)
		n++;
	for(i=0;i<n;i++)
	{for(j=0;j<n;j++)
		{if(i+j>=n/2&&i-j<=n/2&&j-i<=n/2&&i+j<n/2*3+n%2)
			{ textcolor(YELLOW);
			  cprintf("*");}
	else
			{printf(" ");}

		}
		printf("\n");
	} getch();
	return 0;
}
