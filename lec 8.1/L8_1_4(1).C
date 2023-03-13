#include<stdio.h>
#include<conio.h>
main()
{
    int a[5];
    int i,count=0,sum=0;
    float avg;
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
       sum=sum+a[i];
    }
    avg=sum/count;
    printf("the element :%d",count);
    printf("the element :%d",sum);
    getch();


}