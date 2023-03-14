#include<stdio.h>

main()

{
	int i,j,r,c;
	printf("enter the size of row : ");
	scanf("%d",&r);
	printf("enter the size of colum : ");
	scanf("%d",&c);
	
	int a[r][c],b[r][c],d[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter the element a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
		
	}
	printf("\n");
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter the element b[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
			d[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\n addition of array is : \n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",d[i][j]);
		}
		
		printf("\n");
	}
}
