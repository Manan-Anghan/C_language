#include<stdio.h>
#include<conio.h>

main()

{
    char n;
    clrscr();
    printf("enter the value of n :");
    scanf("%c",&n);

    if(n>=65 && n<=90)
    {
       printf("the character is capital alphabet...");
    }
    else if(n>=97 && n<=122)
    {
       printf("the character is small alphabet...");
    }
    else if(n>=48 && n<=57)
    {
       printf("the character is number...");
    }
    else
    {
       printf("the character is special symbol...");
    }
    getch();
}