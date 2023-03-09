#include<stdio.h>
#include<conio.h>

main()
{
    int n,ren,div,count=0;
    clrscr();
    printf("enter the number :");
    scanf("%d",&n);
    while(n>0)
    {
    ren=n%10;
    div=n/10;
    n=div;
    count++;
    }
    printf("the number of digit are :%d",count);
    getch();
}