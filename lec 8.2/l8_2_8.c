#include<stdio.h>

main()

{
	int n,i,j,sumd=0;
	printf("enter the size of 2D array : ");
	scanf("%d",&n);
	
	int a[n][n],d[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter the element a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			d[i][j]=a[i][n-1-j];
		}
	}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
					if(i==j)
					{
						sumd+=a[i][j];
					}
			}
		}
		printf("\n");
		printf("the array in matrix form : \n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		printf("flipped matrix : \n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		printf("\n the sum of the array is : %d",sumd);
}
