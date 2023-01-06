#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,fac=1;
printf("enter the n number you want to sum= ");
scanf("%d ",&n);
for(i=1;i<=n;i++)
{
 fac=fac*i;
}
printf("%d ",&fac);
getch();
}