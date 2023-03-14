#include<stdio.h>

main()

{
	int n,i,a[i],b[i],j,sum=0;
	printf("enter the size of row : ");
	scanf("%d",&i);
	printf("enter the size of colum : ");
	scanf("%d",&j);
	
	for(i=0;i<n;i++)
	{
		printf("enter the element : ",i+1);
		scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++)
	{
		printf("enter the element : ",i+1);
		scanf("%d",&a[j]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}

	for(j=0;j<n;j++)
	{
		printf("%d ",a[j]);
		sum=sum+a[i]+a[j];
	}
	printf("\n");
	printf("the addittion of 2d array is :%d",sum);
	 
}
