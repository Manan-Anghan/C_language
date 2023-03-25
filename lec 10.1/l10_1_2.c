#include<stdio.h>

main()
{
	int a,b=3,c=5;
	printf("enter the value : ");
	scanf("%d",&a);
	printf("\n");
	sum(a,b,c);
}
sum(int  a,int b,int c)
{
	if(a%b==0 && a%c==0)
	{
		printf("the given number is divisible by 3 & 5");
	}
	else
	{
		printf("the given number is not divisible by 3 & 5");
	}
}




