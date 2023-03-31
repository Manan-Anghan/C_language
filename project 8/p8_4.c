#include<stdio.h>

main()

{
	char x[100];
	char *ptr;
	int len;
	ptr=&x;
	
	printf("enter the string :");
	gets(x);
	
	while(*ptr!=NULL)
	{
		length++;
		ptr++;
		
	}
	printf("\nthe length of the string is :%d",length);
}
