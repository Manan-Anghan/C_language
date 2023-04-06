#include<stdio.h>

main()
{
	FILE *p,*p1;
	int n;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
	p=fopen("p10_1.txt","r");
	p1=fopen("C:\\manan\\anshi\\p10_5w.c","w");
	
	if(p==NULL && p1==NULL)
	{
		printf("you cannot open this file. ");
	}
	else
	{
		printf("you can open this file.");
		
		fscanf(p,"The value of n is : %d",&n);
		fprintf(p1,"The value of n is : %d",n);
	}
}

