#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,sum=0;
printf("enter the n number you want to sum= ");
scanf("%d ",&n);
for(i=0;i<=n;i++)
{
sum=sum+i;
}
printf("%d ",sum );
getch();
}