#include<stdio.h>

main()

{
	int i,j,r,c,sum=0;
	printf("enter the size of row : ");
	scanf("%d",&r);
	printf("enter the size of colum : ");
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
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==0||j==0||i==r-1||j==c-1)
			{
				sum+=a[i][j];
			}
		}
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
	printf("\n sum of all boundary elements of the array is :%d ",sum);
}
