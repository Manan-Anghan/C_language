#include<stdio.h>

main()
{
	char a[10];
	int i,j=0,k;
	printf("Enter the string : ");
	for(i=0;i<10;i++)
	{
		scanf("%c",&a[i]);
	}
	for(i=0;a[i]!=NULL;i++)
	{
		for(j=i+1;a[j]!=NULL;j++)
		{
			if(a[i]==' ' || a[i]=='/t')
			{
				i--;
				for(k=j;a[k]!=NULL;k++)
				{
					a[k]=a[k+1];
				}
				a[i-1]=NULL;
			}
		}
	}
	for(i=0;a[i]!=NULL;i++)
	{
		printf("%c",a[i]);
	}
}
