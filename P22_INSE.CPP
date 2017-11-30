//Insertion and extraction overload
#include<iostream.h>
#include<conio.h>
#define SIZE 3
class MAT
{  int a[SIZE][SIZE];
   public:
  MAT()
  {
      for(int i=0;i<SIZE;i++)
       for(int j=0;j<SIZE;j++)

	a[i][j]=0;
  }

   friend void operator>>(istream &shahnawaz,MAT &m)
   {
       for(int i=0;i<SIZE;i++)
       for(int j=0;j<SIZE;j++)
      shahnawaz>>m.a[i][j];
   }
   friend MAT operator*(MAT m1,MAT m2)
    {
      MAT obj;
       for(int i=0;i<SIZE;i++)
	for(int j=0;j<SIZE;j++)
	 for(int k=0;k<SIZE;k++)
	     obj.a[i][j]+=m1.a[i][k]*m2.a[k][j];
	    return obj;
    }
    friend void operator<<(ostream &shaikh,MAT obj)
    {
       for(int i=0;i<SIZE;i++)
       {
	 for(int j=0;j<SIZE;j++)
	  {
	  shaikh<<" "<<obj.a[i][j];
	  }
	  shaikh<<endl;
	}
     }
};
int main()
{
  MAT m1,m2,m3;
  clrscr();
  cout<<"enter the element of 1 matrix"<<endl;
  cin>>m1;   //overloadede insertion operator
  cout<<"enter the element of 2 matrix"<<endl;
  cin>>m2;   //overloadede extraction operator
  m3=m1*m2;
  cout<<m3;
  getch();
  return 0;
}


