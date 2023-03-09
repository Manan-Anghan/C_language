#include<stdio.h>
#include<conio.h>

main()

{
   int fact=1,a;
   clrscr();
   printf("enter the number : ");
   scanf("%d",&a);
   for(fact=1;a>0;a--)
   {
     fact=fact*a;
     printf("%d ",a);
   }
   printf("\nthe factorial of all number is :%d ",fact);
   getch();
}