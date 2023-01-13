#include<stdio.h>
#include<conio.h>
void main()
{
int x[10],i,pass,j,temp;
clrscr();
printf("Enter a set of number ");
for(i=0;i<10;i++)
 {
scanf("%d",&x[i]);
 }
for(pass=1;pass<10;pass++)
 {
for(j=0;j<10-pass;j++)
  {
 if(x[j]>x[j+1])
   {
    temp=x[j+1];
    x[j+1]=x[j];
    x[j]=temp;
    }
   }
  }
  for(i=0;i<10;i++)
  {
  printf("%d ",x[i]);
  }
  getch();
 }
