#include<stdio.h>

struct emp{
	char name[20],role[20],city[10],c_name[10];
	int id,exp,age;
};
main(){
	struct emp e;
	int i,n;
	printf("enter the number of employee :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n===============================");
		printf("\nenter the name of company :");
		scanf("%s",&e.c_name);
		printf("enter the employee name :");
		scanf("%s",&e.name);
		printf("enter the role of employee :");
		scanf("%s",&e.role);
		printf("enter the city of employee :");
		scanf("%s",&e.city);	
		printf("enter the employee experience :");
		scanf("%d",&e.exp);
		printf("enter the employee  id :");
		scanf("%d",&e.id)		
		printf("enter the employee age :");
		scanf("%d",&e.age);
	
		printf("\n****************************");
		printf("\nthe name of company :%s",e.c_name);
		printf("\nthe name of employee is :%s",e.name);
		printf("\nthe role of employee is:%s",e.role);
		printf("\nthe city of employee is:%s",e.city);
		printf("\nthe employee age is:%d",e.age);
		printf("\nthe employee experience in company is:%d",e.exp);
		printf("\nthe employee id is:%d",e.id);
		
	}
}
