#include<stdio.h>
#include<conio.h>

main()

{
   int year=2000;
   clrscr();
   do
   {
      if(year%4==0)
      printf("%d ",year);
      year++;
   }
   while(year<=3000);
   getch();
}