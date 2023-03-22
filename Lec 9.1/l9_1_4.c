#include<stdio.h>
main()
{
   int i,n;
   printf("enter the size of string :");
   scanf("%d",&n);

   char c[n];
   printf("enter the sring :");
   scanf(" %s",&c);

   for(i=0;i<n;i++)
   {
       if(c[i]>=97 && c[i]<=122)
       {
           c[i]-=32;
           printf("%c",c[i]);
       }
   }
   
   
}
