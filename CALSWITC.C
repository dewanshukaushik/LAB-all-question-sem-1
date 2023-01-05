#include<stdio.h>
#include<conio.h>
void main()
{
float x,y;
char a;
clrscr();
printf("enter a operator +,-,/,* = ");
scanf("%c",&a);
printf("enter number 1 ");
scanf("%f",&x);
printf("enter number 2 ");
scanf("%f",&y);


switch(a)
{
case '+':
     printf("sum=%f",x+y);
     break;
case '-':
     printf("sub=%f",x-y);
     break;
case '/':
     printf("div=%f",x/y);
     break;
case '*':
     printf("multi=%f",x*y);
     break;
default:
     printf("wrong operator");
  }
  getch();
  }






