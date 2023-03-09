#include<stdio.h>
#include<conio.h>

main()

{
   int year=2000;
   clrscr();
  printf("enter the value of year : ");
   scanf("%d",&year);

   while(year<=3000)
   {
   if(year%4==0)
   printf("%d " ,year);
   year++;
   }
   getch();
}