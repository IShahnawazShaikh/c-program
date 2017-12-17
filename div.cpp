#include<iostream>
using namespace std;
class pos
{
   int marks[20] ,n;
   public:
   	void input()
   	{  int i;
   		cout<<"enter number of subject"<<endl;
     	cin>>n;
 	     for(i=0;i<n;i++)
 	     {	  
		    cout<<"enter marks"<<endl;
   		     cin>>marks[i];
         }
	 }
	 void output()
	 { float per,sum=0.0;
	 int i;
	 	for(i=0;i<n;i++)
	 	{
	 		sum+=marks[i];
		 }
		 per=sum/n;
		 if(per>=60)
		 {
		 	cout<<"first division";
		 }
		 else if(per>=50&&per<60)
         {
		   cout<<"second divsion";
         }
		  else
         {
		 
         cout<<"fail";
       	}

}
	   
};
int main()
{
	pos obj;
	obj.input();
	obj.output();
	return 0;
}
