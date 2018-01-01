/*program to overload the following operator

  1.insertion 2.extraction 3.Adddition 4.subtraction 5.multiplication

*/
  #include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class mat
{
   int m[2][2];
   public:
   mat()
   {
     int i,j;
      for(i=0;i<2;i++)
      {
	for(j=0;j<2;j++)
	{
	   m[i][j]=0;
	}
      }
    }
   friend void operator>>(istream &shahnawaz,mat &obj)
   {
     int i,j;
      for(i=0;i<2;i++)
      {
	for(j=0;j<2;j++)
	{
	   shahnawaz>>obj.m[i][j];
	}
      }
   }
   friend void operator<<(ostream &shaikh,mat &obj)
   {
       int i,j;
      for(i=0;i<2;i++)
      {
	for(j=0;j<2;j++)
	{
	  shaikh<<setw(5)<<obj.m[i][j];
	}
	cout<<endl;
      }
   }
   mat operator-(mat obj)
   {                         //Subtraction of 2 matrix take place
      int i,j;
      mat temp;
      for(i=0;i<2;i++)
      {
	for(j=0;j<2;j++)
	{
	  temp.m[i][j]=m[i][j]-obj.m[i][j];
	}
      }
      return temp;
   }
   mat operator+(mat obj)
   {                         //Addition of 2 matrix take place
      int i,j;
      mat temp;
      for(i=0;i<2;i++)
      {
	for(j=0;j<2;j++)
	{
	  temp.m[i][j]=m[i][j]+obj.m[i][j];
	}
      }
      return temp;
   }
   mat operator*(mat obj)
   {                         //Multiplication  of 2 matrix take place
      int i,j,k;
      mat temp;
      for(i=0;i<2;i++)
      {
	for(j=0;j<2;j++)
	{
	  for(k=0;k<2;k++)
	  {
	    temp.m[i][j]+=m[i][k]*obj.m[k][j];
	  }
	}
      }
      return temp;
   }
 };
 int main()
 {
    mat obj1,obj2,obj3,obj4,obj5;
    clrscr();
    cout<<endl<<"Enter the element of 1 matrix"<<endl;
    cin>>obj1;
    cout<<endl<<"Enter the element of 2 matrix"<<endl;
    cin>>obj2;
    clrscr();
    cout<<endl<<"1st Matrix"<<endl;
    cout<<obj1;
    cout<<endl<<"2nd Matrix"<<endl;
    cout<<obj2;
    obj3=obj1-obj2;
    obj4=obj1+obj2;
    obj5=obj1*obj2;
    cout<<endl<<"Matrix1-Matrix2"<<endl;
    cout<<obj3;
    cout<<endl<<"Matrix1+Matrix2"<<endl;
    cout<<obj4;
    cout<<endl<<"Matrix1*Matrix2"<<endl;
    cout<<obj5;
    getch();
    return 0;
  }