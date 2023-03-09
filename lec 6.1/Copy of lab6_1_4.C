#include<stdio.h>
#include<conio.h>

main()

{
     int a=1,n;
     clrscr();
     printf("enter the value of n :");
     scanf("%d",&n);
     while(n>=a)
     {
       printf("%d ",n);
       n--;
     }
     getch();
}