#include<stdio.h>
#include<conio.h>

main()

{
     int x,y,a;
     clrscr();
     printf("enter the value of x :");
     scanf("%d",&x);
     printf("enter the value of y :");
     scanf("%d",&y);
     a=(x*x)+(y*y)+(2*x*y);
     printf("the sum of (x+y)2 is :%d",a);
     getch();
}