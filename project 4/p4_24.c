#include<stdio.h>
main()

{
	int i,j,s,space=4;
	
	for(i=5;i>=1;i--)
	{
		for(s=1;s<=space;s++)
		{
			printf(" ");
		}
		space--;
		for(j=5;j>=i;j--)
		{
			printf("%d",j);
		}
			
		for(j=i;j<=5;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
