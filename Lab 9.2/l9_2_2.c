#include<stdio.h>
#include<string.h>
main()

{
	char a[50],b[15],a1[50],b1[15];
	
	printf("\nTo creat ypur account enter email and password :\n");
	printf("Enter the email : ");
	gets(a);
	printf("Enter the password : ");
	gets(b);
	
	printf("Your account has been created\n ");
	
	printf("To login in your account Enter email same email and password\n");
	printf("Enter the email : ");
	gets(a1);
	printf("Enter the password : ");
	gets(b1);
	
	if(strcmp(a,a1)==0 && strcmp(b,b1)==0)
	{
		puts("log in successfully");
	}
	else
	{
		puts("log in faild ");
	}
}
