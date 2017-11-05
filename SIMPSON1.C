//Simpson 1/3rd rule
#include<stdio.h>
#include<conio.h>
#define f(x) 1/(1+x*x)
int main()
{
  float sum1,sum2,value,ans,lower,upper,h,arr1[20],arr2[20];
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
    { if(i%2!=0)
      sum1+=arr2[i];
      else
      sum2+=arr2[i];

    }
    ans=h/3*(arr2[0]+arr2[value]+4*sum1+2*sum2);
    printf("\nAnswer=%f",ans);
    getch();
    return 0;
    }

