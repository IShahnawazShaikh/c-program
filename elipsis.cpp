#include<iostream>
using namespace std;
int main()
{
	int a,b,c,i;
	char ch[26];
	cout<<endl<<"enter numerator"<<endl;
	cin>>a;
	cout<<endl<<"enter denominator"<<endl;
	cin>>b;
	for(i=0;i<26;i++)
	{
		ch[i]=65+i;
	}
	try{
		if(b==0)
		throw 1;
		for(i=0;i<26;i++)
	{
		if(b==ch[i]) 
		throw ch[i];
    } 
	    c=a/b;	
	}
	catch(...)
	{
		cout<<"exeption is handled";
	}
	catch(float)
	{
		cout<<"exeption";
	}
	
	cout<<c;
	//return 0;
	
}
