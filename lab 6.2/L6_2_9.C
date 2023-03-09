#include<stdio.h>
#include<conio.h>

main()

{
   int fact=1,a;
   clrscr();
   printf("enter the last number : ");
   scanf("%d",&a);
   do
   {
     fact=fact*a;
     printf("%d ",a);
     a--;
   }
   while(a>0);
   printf("\nthe factorial of all number is :%d ",fact);
   getch();
}