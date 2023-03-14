#include<stdio.h>

main()

{
	int i,j,r,c,count=0;
	float avg,sum=0;
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
			sum+=a[i][j];
			count++;
		}
		
	}
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		
		printf("\n");
	}
	printf("\n the number of element is :%d ",count);
	printf("\n the average is :%f",sum/count);
}
