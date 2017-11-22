#include<stdio.h>
#include<conio.h>
int main()
{
	  int f,n;
	  printf("\nEnter a number to find factorial\n");
	  scanf("%d",&n);
	  f=fact(n);
	  printf("\nFactorial=%d",f);
	  
}
int fact(int x)
{
	 int f=1,i=1;
     if(x==1)
     return 1;
     else
     f=x*fact(x-1);
     return (f);
     
}     

