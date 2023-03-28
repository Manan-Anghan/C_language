#include<stdio.h>

fact(int a)
{
	if(a==0)
	{
		return 1;
	}
	else
	{
		return a*fact(a-1);
	}
}

main()
{
	int a;
	printf("enter the value :");
	scanf("%d",&a);
	printf("\n");
	printf("the factorial of the number is %d:",fact(a));
}

