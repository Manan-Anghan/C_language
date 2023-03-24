#include<stdio.h>

main()

{
	int i,j=0,k;
	char a[10];
	
	printf("enter the string :");
	
	for(i=0;i<10;i++)
	{
		scanf("%c",&a[i]);
	}
	printf("\n");
	for(i=0;a[i]!=NULL;i++)
	{
		for(j=i+1;a[j]!=NULL;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;a[k]!=NULL;k++)
				{
					a[k]=a[k+1];
				}
			}
		}
	}
	for(i=0;a[i]!=NULL;i++)
	{
		printf("%c",a[i]);
	}
}
