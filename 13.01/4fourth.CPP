#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,even=0,odd=0;
printf("enter the n number you want to sum= ");
scanf("%d ",&n);
for(i=0;i<=n;i++)

{ if(i%2==0);
 {
even=even+i;
 }
 {
odd=odd+i;
 }
}
printf("%d",&even);
printf("%d",&odd);
getch();
}