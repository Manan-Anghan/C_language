#include<stdio.h>

main()

{
	int i,j,r,c,sumd=0,sum[c];
	printf("enter the size of row : ");
	scanf("%d",&r);
	printf("enter the size of column : ");
	scanf("%d",&c);
	
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter the element a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
		
			sumd+=a[i][j];
		}
		sum[i]=sumd;
		sumd=0;
	}
	printf("\n");
	printf("the array in matrix form : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
    }
		printf("\n the sum of array is : \n");
	for(i=0;i<c;i++)
	{
		printf("%d ",sum[i]);
	}
	printf("\n");
}
