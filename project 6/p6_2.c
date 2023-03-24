#include<stdio.h>
#include<string.h>
main()

{
	char a[100],r[100];
	int n;
	printf("enter the string :");
	gets(a);
	strcpy(r,a);
	strrev(a);
	n=strcmp(a,r);
	if(n==0)
	{
		printf("given string is palidrome");
	}
	else
	{
		printf("given string is not palidrome");
	}	
}
