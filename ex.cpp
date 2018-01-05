#include<iostream>
using namespace std;
int main()
{
	int a=2,b=1,c;
	try{
		if(b==0)
		throw 1;
		if(b==1)
		throw 'a';
		if(b==2)
		throw 1.1;
	    c=a/b;	
	}
	catch(int s)
	{
		cout<<"exeption is handled";
	}
	catch(char a)
	{
	
	   cout<<endl<<"char";
	}
	catch(float a)
	{
		cout<<endl<<"float";
		}	
	cout<<c;
	return 0;
	
}
