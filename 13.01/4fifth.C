
// WAP to print the fibonacci series
#include<stdio.h>
#include<conio.h>
void main()
{
	int a=1,b=0,i,c;
	clrscr();
	for(i=1;i<=20;i++)
	{
	  c=a+b;
	  printf("%d\t",c);
	  a=b;
	  b=c;
	}
	getch();
}