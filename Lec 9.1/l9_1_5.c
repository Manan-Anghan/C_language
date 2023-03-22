#include<stdio.h>

main()

{
	
	int n,i;

	printf("Enter the size of the string : ");
	scanf("%d",&n);
	
	char c1[n],c2[n];
	
	printf("Enter the string : ");
	scanf("%s",&c1);
	
	printf("\nThe string in Titlecase : \n\n");
	for(i=0;i<n;i++)
	{
		if(c1[i]>=65 && c1[i]<=90)
		{
		c2[i]=c1[i]+32;
	    }
	    else
	    {
	    c2[i]=c1[i]-32;
		}
	}
	
	printf("%s",c2);
	
}
