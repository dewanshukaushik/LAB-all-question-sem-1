 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int oddsum=0,evensum=0;
 int x[5],i,j=0,k=0,odd[5],even[5];
 clrscr();
 printf("enter the numbers ");
 for(i=0;i<5;i++)
 { scanf("%d",&x[i]);
   }
 for(i=0;i<5;i++)
 {
 if(x[i]%2==0)
 {
 even[k]=x[i];
 k=k+1;
  }
 else
 {
 odd[j]=x[i];
 j=j+1;
 }
}
  for(i=0;i<j;i++)
  {
   oddsum = oddsum + x[i];
   printf(" odd=%d\t",x[i]);
  }
   for(i=0;i<k;i++)
   {
    evensum = evensum + x[i];
    printf(" even=%d\t",x[i]);
   }
   printf("  Oddsum = %d\nEvensum = %d",oddsum,evensum);

   getch();
   }