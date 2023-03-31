#include<stdio.h>

main()

{
	int a,b;
	printf("enter the value a :\n");
	scanf("%d",&a);
	printf("enter the value b :\n");
	scanf("%d",&b);
	
	int *ptr,*ptr1;
	ptr=&a;
	ptr1=&b;
	printf("the swap of two numbers is :\n");
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\na=%d\n",*ptr);
	printf("\nb=%d\n",*ptr1);
}
