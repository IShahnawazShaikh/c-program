#include<iostream.h>
#include<conio.h>
#include<string.h>
class overloading
{
   public:
   void swap(int a,int b)
     {
       cout<<endl<<"before swaping"<<endl;
       cout<<"first value="<<a<<endl<<"second value="<<b;
       a=(a+b)-(b=a);
       cout<<endl<<"After swaping"<<endl;
       cout<<"first value="<<a<<endl<<"second value="<<b;
     }
    void swap(double a,double b)
    {
      cout<<endl<<"before swaping"<<endl;
      cout<<"first value="<<a<<endl<<"second value="<<b;
      a=(a+b)-(b=a);
      cout<<endl<<"After swaping"<<endl;
      cout<<"first value="<<a<<endl<<"second value="<<b;
    }
    void swap(char a,char b)
    {
      cout<<endl<<"before swaping"<<endl;
      cout<<"first value="<<a<<endl<<"second value="<<b;
      a=(a+b)-(b=a);
      cout<<endl<<"After swaping"<<endl;
      cout<<"first value="<<a<<endl<<"second value="<<b;
    }

   void swap(char a[],char b[])
   {
      char temp[20];
      cout<<endl<<"before swaping"<<endl;
      cout<<"first value="<<a<<endl<<"second value="<<b;
      strcpy(temp,a);
      strcpy(a,b);
      strcpy(b,temp);
      cout<<endl<<"After swaping"<<endl;
      cout<<"first value="<<a<<endl<<"second value="<<b;
   }

 };
 int main()
 {
    overloading obj;
    obj.swap('A','B');
    obj.swap(2.3,3.3);
    obj.swap(2,3);
    obj.swap("shahnawaz shaikh","shahbaz mirza");
    getch();
    return 0;
  }