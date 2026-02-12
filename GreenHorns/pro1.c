#include<stdio.h>

void main()
{
	int a,b;
	
	printf("Enter a : ");
	scanf("%d",&a);
	printf("Enter b : ");
	scanf("%d",&b);
	
	// swaping without using third variable.
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("a = %d\n",a);
	printf("b = %d",b);
}
