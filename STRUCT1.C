//program to find topper using nested structure
#include<stdio.h>
#include<conio.h>
int main()
{
  struct student
	      {
		struct college{
				int  college_id;
				char  college_name[20];
			       }clg;
			       char name[20];
				int marks[3];
				int tot;
				float per;
	       }p[3];
	       int m=0,s=0,y=0,l=0,i,j;
	       float g=0.0;
	       clrscr();
       for(i=0;i<3;i++)
     { printf("\nenter the name of %d student",l+1);
       scanf("%s",p[i].name);
      printf("enter the college name of %d student ",l+1);
      scanf("%s",p[i].clg.college_name);
       printf("enter the college id of %d student",l+1);
       scanf("%s",p[i].clg.college_id);

	for(j=0;j<3;j++)
	{
	  printf("\nenetr the marks of %d subject",m+1);
	  scanf("%d",&p[i].marks[j]);
	m++;
	}
       m=0;
      l++;
      }
	for(i=0;i<3;i++)
	 {for(j=0;j<3;j++)
	   {
	       y=y+p[i].marks[j];
	   }
	   p[i].per=y/3;
	  y=0;
	}

      g=p[0].per;
      for(i=1;i<3;i++)
      {  if(g<p[i].per)
	 { g=p[i].per;
	  s=i;
	 }
       }
       printf("topper=%s",p[s].name);
       printf("\ncollege name=%s",p[s].clg.college_name);
       printf("\ncollege ID=%d",p[s].clg.college_id);
       getch();
       return 0;
   }