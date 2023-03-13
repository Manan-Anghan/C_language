#include<stdio.h>
#include<conio.h>
main()
{
    int a[5];
    int i,count=0;
    clrscr();
    for(i=0;i<5;i++)
    {
	printf("enter the element %d:",i+1);
	scanf("%d ",&a[i]);
    }
    for(i=0;i<5;i++)
    {
       printf("%d ",a[i]);
       count++;
    }
    printf("the element :%d",count);
    getch();


}