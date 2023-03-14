#include<stdio.h>

main()

{
	int i,j,r,c,sumd=0,sum[r];
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
			sumd+=a[i][j];
		}
		sum[i]=sumd;
		sumd=0;
	}
	printf("\n");
	for(i=0;i<r;i++)
	{	
		printf("\n the sum of %d is : %d",i+1,sum[i]);
	}
}
