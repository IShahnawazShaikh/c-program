#include<fstream>
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{

    char ch,str[20];
    int count=0,i;
    fstream file;
    file.open("shahnawaz.txt",ios::out);
    cout<<"enter the string"<<endl;
    gets(str);
    for(i=0;str[i]!='\0';i++)
    file.put(str[i]);
    file.close();
    file.open("shahnawaz.txt",ios::in);
    while(file)
    {
       ch=file.get();
       if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
       {
	  count++;
       }
    }
    file.close();
    cout<<endl<<"Number of vowels="<<count;
    return 0;
  }


