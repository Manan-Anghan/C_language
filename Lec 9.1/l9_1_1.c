#include<stdio.h>

main()

{
   char c;
   printf("enter the character :");
   scanf(" %c",&c);


       if(c>=65 && c<=90)
       {
           c+=32;
          
       }
   		 printf(" %c",c);
}
