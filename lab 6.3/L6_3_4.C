#include<stdio.h>
#include<conio.h>

main()
{
   int a=1,n;
   clrscr();
   printf("enter the value : ");
   scanf("%d",&n);
   for(a=1;n>=a;n--)
   {
      printf("%d ",n);
   }
   getch();
}