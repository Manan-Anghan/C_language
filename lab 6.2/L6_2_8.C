#include<stdio.h>
#include<stdio.h>

main()

{
   int sum=0,a,n=1;
   clrscr();
   printf("enter the value :");
   scanf("%d",&a);
   do
   {
     sum=sum+n;
     printf("%d \n",sum);
     n++;
   }
   while(n<=a);
   getch();
}