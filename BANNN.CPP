#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class Bank
{
	char name[20],type[30],acc[20];
	float bal;
	public:
		void input()
		{
			cout<<"enter name of account holder"<<endl;

			gets(name);
			cout<<endl<<"enter acc number"<<endl;
			gets(acc);
			cout<<endl<<"enter acc type";
			gets(type);
			bal=1000;
		}
		void deposit()
		{
		float bala;
		cout<<"enter amount to be deposit"<<endl;
		cin>>bala;
		 bal+=bala;

		}
		void with()
		{
			float bala;
			cout<<"enter amount to be withdrawal"<<endl;
			cin>>bala;
			if(bal>=bala)
			{
				bal-=bala;

			}
			else
			{
				cout<<endl<<"you have insufficient balance";
			}
		}
		void output()
		{
			cout<<"name="<<name;
			cout<<endl<<"type="<<type<<endl<<"balance="<<bal<<endl<<"number="<<acc;
		}
};
int main()
{
	 Bank obj;
	 int n;
	 obj.input();
	 cout<<"enter 1 to deposit and 2 for withdrawal"<<endl;
	 cin>>n;
	 switch(n)
	 {
		case 1:
			obj.deposit();
	    break;
	   case 2:
		obj.with();
		break;
	 }
	 obj.output();
	 getch();
	 return 0;
}
