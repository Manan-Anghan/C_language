#include<stdio.h>
#include<string.h>
length(char a[])
{
    int count=0,i;
    for(i=0;i<a[i]!=NULL;i++)
    {
    	count++;
	}
	return count;
}
main()
{
	int i;
	char a[50];
	printf("enter the string :");
	gets(a);
	printf("the length of the string is %d:",length(a));
}
