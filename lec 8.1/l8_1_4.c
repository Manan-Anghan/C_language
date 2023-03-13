#include<stdio.h>

main()

{
	int n,i,a[n],b[n],sum=0;
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
	}

	for(i=0;i<n;i++)
	{
		printf("\n%d ",b[i]);
		sum=sum+a[i]+b[i];
	}
	printf("\n");
	printf("the addittion of 1d array is :%d",sum);
	 
}
