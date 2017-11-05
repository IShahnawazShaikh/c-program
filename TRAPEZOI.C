//trapezoidal rule
#include<stdio.h>
#include<conio.h>
#define f(x) 1/(1+x*x)
int main()
{
  float sum,value,ans,lower,upper,h,arr1[20],arr2[20];
  int i;
  clrscr();
  printf("enter the lower limit and upper limit\n");
  scanf("%f%f",&lower,&upper);
  printf("\nEnter the height\n");
  scanf("%f",&h);
  value=(upper-lower)/h;
  for(i=0;i<=value;i++)
   {
      arr1[i]=i*h;
      arr2[i]=f(arr1[i]);
   }
   for(i=1;i<value;i++)
    {
      sum+=arr2[i];
    }
    ans=h/2*(arr2[0]+arr2[value]+2*sum);
    printf("\nAnswer=%f",ans);
    getch();
    return 0;
    }

