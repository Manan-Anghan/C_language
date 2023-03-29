#include<stdio.h>

main()
{
   int x,y;
  
   printf("Enter the value of x : ");
   scanf("%d",&x);
   printf("Enter the value of y : ");
   scanf("%d",&y);
   
   int *ptr,*ptr2;
   ptr=&x;
   ptr2=&y;
   printf("\nThe swap of two variables is : ");
   x=x+y;
   y=x-y;
   x=x-y;
   printf("\nx=%d\n",*ptr);
   printf("y=%d",*ptr2);
  
}
