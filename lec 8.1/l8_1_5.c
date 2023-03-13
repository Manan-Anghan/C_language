#include<stdio.h>

main()

{
	int n,i,a[n],b[n],c[n];
	printf("enter the the size of array : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter the element : ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("enter the element : ",i+1);
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\n%d ",a[i]);
		c[i]=a[i];
	}
	printf("\n__________\n");
	for(i=0;i<n;i++)
	{
		printf("\n%d ",b[i]);
		c[n+i]=b[i];
	}
	printf("\n__________\n");
	for(i=0;i<n+n;i++)
	{
		printf("\n%d ",c[i]);
	}	 
}
