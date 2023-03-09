#include<stdio.h>
#include<conio.h>

main()
{
  int a,i=0;
  clrscr();
  printf("enter the value :");
  scanf("%d",&a);

  while(a>=i)
  {
      if(i%2==0)
      printf("%d",a);
      a++;
  }
  printf("the number is prime :%d",i);
  getch();
}