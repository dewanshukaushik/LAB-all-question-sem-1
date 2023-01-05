#include<stdio.h>
#include<conio.h>
void main()
{
int sum(int);
int n,result;
clrscr();
printf("enter the value of n ");
scanf("%d",&n);
result=sum(n);
printf("answer= %d",result);
getch();
}
int sum(int k)
{
if(k==1)
return 1;
else

return(k+sum(k-1));
}