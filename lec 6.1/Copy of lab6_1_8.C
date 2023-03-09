#include<stdio.h>
#include<conio.h>

main()

{
   int a=1,n,sum=0;
   clrscr();
   printf("enter the value n : ");
   scanf("%d",&n);

   while(a<=n)
   {
      sum=sum+a;
      printf("%d ",sum);
      a++;
   }
   getch();
}