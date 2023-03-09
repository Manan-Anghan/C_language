#include<stdio.h>
#include<conio.h>

main()

{
   int year;
   clrscr();
   for (year=2000;year<=3000;year++)
   {
      if(year%4==0)
      printf("%d ",year);
   }
   getch();
}