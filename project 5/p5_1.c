#include<stdio.h>

main()

{
	int i,n;
	printf("enter the array size : ");
	scanf("%d",&n);
	
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("\n enter element %d :",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n all negative elements are  :  ");
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
		printf("%d ",a[i]);
		}
	}
}
