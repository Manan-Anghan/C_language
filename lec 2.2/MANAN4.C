#include<stdio.h>
#include<conio.h>

main()

{
   int h,a,b;
   clrscr();
   printf("enter the height :");
   scanf("%d",&h);
   printf("enter the base :");
   scanf("%d",&b);
   a=(h*b)/2;
   printf("the area of triangle is :%d",a);
   getch();

}