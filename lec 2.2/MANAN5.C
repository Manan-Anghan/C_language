#include<stdio.h>
#include<conio.h>

main()

{
    float  p,r,n,a;
    clrscr();
    printf("enter the rate :");
    scanf("%f",&r);
    printf("enter the balance :");
    scanf("%f",&p);
    printf("enter the value of n :");
    scanf("%f",&n);
    a=(p*r*n)/100;
    printf("the simple intrest of p,r,n is :%f",a);
    getch();
}