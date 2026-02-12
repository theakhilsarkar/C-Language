#include<stdio.h>

//  Write C program to convert temperature from degree Celsius to Fahrenheit.
// (f=(9/5*c)+32)

void main()
{
	int celsius;
	float fahrenheit;
	
	printf("Enter temprature in celsius : ");
	scanf("%d",&celsius);
	
	fahrenheit = (celsius*1.8)+32;
	
	printf("\n %d C = %.1f F",celsius,fahrenheit); // 100 C = 212 F
}
