#include <stdio.h>

main() 

{
    int r,c,i,j;
    
    printf("Enter the number of rows : ");
    scanf("%d",&r);
     printf("Enter the number of coulmns : ");
    scanf("%d",&c);
    
    int a[r][c];
    
    printf("Enter the elements of the array:\n");
    for (i=0;i<r;i++) 
	{
        for (j=0;j<c;j++) 
		{
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n============================================\n");

    
    int insert_r, insert_c, insert_value;
    
    printf("Enter the row to insert: ");
    scanf("%d", &insert_r);
    printf("Enter the column to insert: ");
    scanf("%d", &insert_c);
    printf("Enter the value to be inserted: ");
    scanf("%d", &insert_value);
    
    a[insert_r][insert_c] = insert_value;
    
    printf("New 2D array after insert operation:\n");
    for (i=0;i<r;i++) 
	{
        for (j=0;j<c;j++) 
		{
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n============================================\n");

    
    int delete_r, delete_c;
    
    printf("Enter the row to delete: ");
    scanf("%d", &delete_r);
    printf("Enter the column to delete: ");
    scanf("%d", &delete_c);
    
    a[delete_r][delete_c] = 0; 
    
    printf("New 2D array after delete operation:\n");
    for (i=0;i<r;i++) 
	{
        for (j=0;j<c;j++) 
		{
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n============================================\n");

  
    int update_r, update_c, update_value;
    
    printf("Enter the row to update: ");
    scanf("%d", &update_r);
    printf("Enter the column to update: ");
    scanf("%d", &update_c);
    printf("Enter the new value: ");
    scanf("%d", &update_value);
    
    a[update_r][update_c] = update_value;
    
    printf("New 2D array after update operation:\n");
    for (i=0;i<r;i++) 
	{
        for (j=0;j<c;j++) 
		{
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n============================================\n");
}
