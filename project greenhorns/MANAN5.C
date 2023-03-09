#include<stdio.h>
#include<conio.h>

main()

{
    int bs,hra,da,ta,gs;
    clrscr();
    printf("enter the value of b.s. :");
    scanf("%d",&bs);
    hra=(10*bs)/100;
    printf("%d\n",hra);
    da=(8*bs)/100;
    printf("%d\n",da);
    ta=(5*bs)/100;
    printf("%d",ta);
    gs=bs+da+ta+hra;
    printf("the sum of bs,hra,da and ta is :%d",gs);
    getch();
}