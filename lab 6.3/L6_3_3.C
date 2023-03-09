#include<stdio.h>
#include<conio.h>

main()
{
   int a=1,n;
   clrscr();
   printf("enter the value : ");
   scanf("%d",&n);
   for(a=1;a<=n;a++)
   {
      printf("%d ",a);
   }
   getch();
}