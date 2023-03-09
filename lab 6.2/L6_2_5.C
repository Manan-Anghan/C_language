#include<stdio.h>
#include<conio.h>

main()
{
   int a=1,n;
   clrscr();
   printf("enter the value : ");
   scanf("%d",&n);
   do
   {
      if(a%2!=0)
      printf("%d ",a);
      a++;
   }
   while(n>=a);
   getch();
}