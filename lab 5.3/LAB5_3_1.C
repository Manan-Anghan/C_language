#include<stdio.h>
#include<conio.h>

main()

{
  char p,j,f,m,a,M,J,ju,A,s,o,n,d;
  clrscr();
  printf("enter j for january :\n");
  printf("enter f for february :\n");
  printf("enter m for march :\n");
  printf("enter a for april :\n");
  printf("enter M for march :\n");
  printf("enter J for june :\n");
  printf("enter ju for july :\n");
  printf("enter A for august :\n");
  printf("enter s for september :\n");
  printf("enter o for october :\n");
  printf("enter n for november :\n");
  printf("enter d for december :\n");
  scanf("%c",&p);

   switch(p)
   {
     case 'j':
     printf("the month is january.....");
     break;

     case 'f':
     printf("the month is february.....");
     break;

     case 'm':
     printf("the month is march.....");
     break;

     case 'a':
     printf("the month is april.....");
     break;

     case 'M':
     printf("the month is may.....");
     break;

     case 'J':
     printf("the month is june.....");
     break;

     case 'ju':
     printf("the month is july.....");
     break;

     case 'A':
     printf("the month is august.....");
     break;

     case 's':
     printf("the month is september.....");
     break;

     case 'o':
     printf("the month is october.....");
     break;

     case 'n':
     printf("the month is november.....");
     break;

     case 'd':
     printf("the month is december.....");
     break;

     default:
     printf("invalid choice");

   }
   getch();

}