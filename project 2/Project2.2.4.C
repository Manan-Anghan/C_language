#include<stdio.h>
#include<conio.h>

main()

{
    char n;
    clrscr();
    printf("enter the m for monday :\n");
    printf("enter the T for tuesday :\n");
    printf("enter the w for wednesday :\n");
    printf("enter the t for thursday :\n");
    printf("enter the f for friday :\n");
    printf("enter the s for saturday :\n");
    printf("enter the S for sunday :\n");
    printf("enter your choise");
    scanf("%c",&n);

    switch(n)
    {
       case 'm':
       printf("today is monday...");
       break;

       case 'T':
       printf("today is tuesday....");
       break;

       case 'w':
       printf("today is wednesday....");
       break;

       case 't':
       printf("today is thursday....");
       break;

       case 'f':
       printf("today is friday....");
       break;

       case 's':
       printf("today is saturday....");
       break;

       case 'S':
       printf("today is sunday....");
       break;

       default:
       printf("invalid choise....");

    }

    getch();
}

