#include<iostream.h>
#include<conio.h>
template<class T>
void input(T a[],int n)
{ int i;
   for(i=0;i<n;i++)
   {
      cin>>a[i];
   }
}
template<class G>
 void minimum(G a[],int nm)
{
   G temp;
   int i;
   temp=a[0];
   for(i=1;i<nm;i++)
    {
      if(temp<a[i])
	  temp=a[i];
    }
     cout<<endl<<"greatest="<<temp;
 }
int main()
{
   int ar[5],n;
   float arr[5];
   cout<<"enter number of terms"<<endl;
   cin>>n;
   cout<<endl<<"enter integer array"<<endl;
   input(ar,n);
   minimum(ar,n);
   cout<<endl<<"enter float array";
   input(arr,n);
   minimum(arr,n);
   getch();
   return 0;
 }