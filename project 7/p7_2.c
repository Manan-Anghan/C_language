#include<stdio.h>

arsum(int a[],int n)
{
    int sum=0,i;
    for(i=0;i<n;i++)
    {
    	sum=sum+a[i];
	}
	return sum;
}
main()
{
	int i,n;
	printf("enter the size of array :");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("enter the numbers a[%d]",i);
		scanf("%d",&a[i]);	
	}
	printf("the sum of all numbers is %d:",arsum(a,n));
}
