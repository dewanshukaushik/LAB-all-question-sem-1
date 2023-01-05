// A domestic power distribution company charges.
 // it's domestic cosumer's as follows
#include<stdio.h>
#include<conio.h>
void main()
{
float cha,unit;
clrscr();
printf("enter the unit ");
scanf("%f",&unit);
if(unit<=200)
{
cha=unit*0.50;
printf(" charges= %f",cha);
}
else if(unit>201&& unit<400 )
{
cha=(unit*0.65)+100;
printf("charges= %f",cha);
}
else if(unit>401&& unit<600)
{
cha=(unit*0.80)+230;
printf("charges= %f",cha);
}
else
{
cha=(unit*1.00)+390;
printf("charges=%f",cha);
}
getch();
}