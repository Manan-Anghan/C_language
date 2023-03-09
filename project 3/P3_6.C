#include<stdio.h>
#include<conio.h>

main()

{
   int fact=1,a;
   clrscr();
   printf("enter the value :");
   scanf("%d",&a);

   while(a>0)
   {
      fact=fact*a;
      printf("%d ",a);
      a--;
   }
   printf("\nthe factorial of the number is :%d",fact);
   getch();
}