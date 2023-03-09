#include<stdio.h>
#include<conio.h>

main()

{
   int fact=1,a;
   clrscr();
   printf("enter the last number : ");
   scanf("%d",&a);
   while(a>0)
   {
     fact=fact*a;
     printf("%d ",a);
     a--;
   }
   printf("\nthe factorial of all number if:%d ",fact);
   getch();
}