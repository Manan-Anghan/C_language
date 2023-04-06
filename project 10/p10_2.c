#include<stdio.h>

main()
{
	FILE *p;
	int n;
	printf("enter the value :");
	scanf("%d",&n);
	
	p=fopen("p10_2.c","r");
	
	if(p!=NULL)
	{
		printf("you can open this file....");
		fprintf("the value of n is %d:",n);
	}
	else
	{
		printf("you cannot open this file....");
	}
}
