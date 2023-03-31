#include<stdio.h>

main()

{
	int n,i;
	printf("enter the size of array :");
	scanf("%d",&n);
	
	int a[n],*ptr[n];
	
	for(i=0;i<n;i++)
	{
		printf("enter the elements a[%d]:",i+1);
		scanf(" %c",&a[i]);
		ptr[i]=&a[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d",*ptr[i]);
	}
}
