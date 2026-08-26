#include<stdio.h>
void main()
{
float gsalary  = 54533;
float allowance = gsalary*0.1;
float deduction = 0.03*gsalary;
float nsalary = gsalary + allowance - deduction;
printf("The net salary is %.2f Rs.",nsalary);
}



