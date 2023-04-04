#include<stdio.h>

struct marks{
	int roll_no;
	char name[10];
	float chem_marks,maths_marks,phy_marks;
}

main()
{
	struct marks m;
	int i,n;
	printf("enter the number of student :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\nenter the roll nunber of student :");
		scanf("%d",&m.roll_no);
		printf("enter the name of student :");
		scanf("%s",&m.name);
		printf("enter the chemistry of student :");
		scanf("%f",&m.chem_marks);
		printf("enter the maths of student :");
		scanf("%f",&m.maths_marks);
		printf("enter the physics of student :");
		scanf("%f",&m.phy_marks);
		printf("\n***********************************\n");
		printf("the percentage of student is %f:",(m.chem_marks+m.maths_marks+m.phy_marks)/3);
	}
}
