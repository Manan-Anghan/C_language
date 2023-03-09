//wap programm to defind (a-b)^2 value

#include<stdio.h>
#include<conio.h>

main()

{
    int a,b,c;
    clrscr();
    printf("enter the value of a :");
    scanf("%d",&a);
    printf("enter the value of b
     :");
    scanf("%d",&b);
    c=(a*a)+(b*b)-(2*a*b);
    printf("the sum of (a-b)2 is :%d",c);
    getch();
}