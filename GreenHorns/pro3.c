// 4. Write C Program to find gross salary.(GROSS SALARY=BASE SALARY+HRA+DA+TA)
//Ex. Base Salary: 100 RS, HRA=10%, DA=5%, TA=8%.
//Ans = 123 RS

#include<stdio.h>

void main()
{
	float base_salary;
	
	printf("Enter your base salary : ");
	scanf("%f",&base_salary);
	
	float hra = (base_salary*10)/100;
	float da = (base_salary*5)/100;
	float ta = (base_salary*8)/100;
	
	float gross_salary = base_salary + hra + da + ta;
	
	printf("your gross salary is $ %.2f/-",gross_salary);
}
