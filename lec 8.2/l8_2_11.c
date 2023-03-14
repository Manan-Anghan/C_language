#include<stdio.h>

main()

{
	int i,j,r,c,sum=0;
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
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if((i==0&&i==4)||(j==0&&j==4))
			{
				printf("  ");
			}
			else
			{
			printf("%d",a[i][j]);
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
	printf("\n sum of all boundary inneer elements of the array is :%d ",sum);
}
