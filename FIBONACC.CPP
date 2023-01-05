#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int fibo(int);
int n,m,result;
printf("enter the value of n ");
scanf("%d",&n);
result=fibo(n);
for(result;result>m;result++);
printf("%d",result);
getch();
}
int fibo(int n)
{
if(n==0)
return 0;
else if(n==1)
return 1;
else
return(fibo(n-1)+fibo(n-2));
}
