#include<stdio.h>

struct stud{
	char name[20],course[10],city[10],school[10];
	int id,std,age;
};
main(){
	struct stud s;
	int i,n;
	printf("enter the number of student :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n===============================");
		printf("\nenter the student name :");
		scanf("%s",&s.name);
		printf("enter the course of student :");
		scanf("%s",&s.course);
		printf("enter the city of student :");
		scanf("%s",&s.city);
		printf("enter the name of school :");
		scanf("%s",&s.school);
		printf("enter the student id :");
		scanf("%d",&s.id);
		printf("enter the student standard :");
		scanf("%d",&s.std);
		printf("enter the student age :");
		scanf("%d",&s.age);
		
		printf("\n****************************");
		printf("\nthe student standard :%d",s.std);
		printf("\nthe name of school :%s",s.school);
		printf("\nthe student name :%s",s.name);
		printf("\nthe student id :%d",s.id);
		printf("\nthe student age :%d",s.age);
		printf("\nthe course of student :%s",s.course);
		printf("\nthe city of student :%s",s.city);
 }
}
