#include<stdio.h>
main(){

int n,a,b,i,c;
  printf("Enter an operator (+, -, *, /,%%): ");
  scanf("%c", &c);
	
  printf("\n");
  switch (c) {
    case '+':
      sum();
      break;
    case '-':
     sum();
      break;
    case '*':
     sum(); 
      break;
    case '/':
     sum();
      break;
    case '%':
     sum();	
	  break; 
        default:
      printf("Error! operator is not correct");
  }
}
sum() {
	  int a,b;
	printf("Enter two values: ");
    scanf("%d%d", &a,&b);
    printf("\n %d+ %d = %d",a,b,a+b);
    printf("\n %d - %d = %d", a,b,a-b);
    printf("\n %d * %d = %d", a,b,a*b);
	printf("\n %d / %d = %d", a,b,a/b);
	printf("\n %d %% %d = %d", a,b,a%b);
	  
}
