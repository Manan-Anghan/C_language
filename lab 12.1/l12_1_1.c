#include<stdio.h>

main()

{
	int n;
	printf("enter the size of array :");
	scanf("%d",&n);
	int a[n],i,*ptr;
	
	ptr=&a[i];
	for(i=0;i<n;i++)
	{
		printf("enter the elements :");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",*(ptr+i));	
	}
	printf("\nthe square of all numbers :");
		for(i=0;i<n;i++)
		{
			printf("%d ",(*(ptr+i)*(a[i])));
		}
}
