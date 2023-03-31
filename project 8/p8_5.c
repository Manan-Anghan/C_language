#include<stdio.h>

sum(int *a,int *b)
{
	printf("enter the value of a :");
	scanf("%d",a);
	printf("enter the value of b :");
	scanf("%d",b);
	printf("\nthe sum of a and b is %d:",*a+*b);
}
main()
{
	int a,b;
	sum(&a,&b);
	printf("\n\nthe value of a is %d:\n",a);
	printf("\nthe value of b is %d:\n",b);
	
}
