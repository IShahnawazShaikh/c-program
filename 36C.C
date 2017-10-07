//program to cheak Alphabet is a vowel or not
#include<stdio.h>
#include<conio.h>
int main()
{  char ch;
    clrscr();
    printf("enter any Alphabet to cheack vowel or not\n");
    scanf("%c",&ch);
    switch(ch)
    {  case 65:
       case 69:
       case 73:
       case 89:
       case 96:
       case 97:
       case 101:
       case 105:
       case 111:
       case 117:
       printf("%c is a vowel",ch);
       break;
	default :
	printf("%c is a constant",ch);
     }
     getch();
     return 0;
     }