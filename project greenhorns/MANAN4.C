#include<stdio.h>
#include<conio.h>

main()
{
   float c,f;
   clrscr();
   printf("enter the temperature in celsius :");
   scanf("%f",&c);
   f=(c*1.8)+32;
   printf("the value of celsius c in fahrenheit is :%f",f);
   getch();

}