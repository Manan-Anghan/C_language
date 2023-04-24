#include<stdio.h>

struct dis {
   int	inch,feet,i1,f1,i2,f2;
};
main()
{
	struct dis d;
	
	printf("Enter the first distance : ");
	printf("\nEnter inch : ");
	scanf("%d",&d.i1);
	printf("Enter feet : ");
	scanf("%d",&d.f1);
	
	printf("\nEnter the second distance : ");
	printf("\nEnter inch : ");
	scanf("%d",&d.i2);
	printf("Enter feet : ");
	scanf("%d",&d.f2);
	
	d.inch=d.i1+d.i2;
	d.feet=d.f1+d.f2;
	
	while(d.inch>=12)
	{
		d.feet++;
		d.inch-=12;	
	}
	printf("\nThe total distance is %d inch and %d feet.",d.inch,d.feet);

}
