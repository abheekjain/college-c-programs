#include<stdio.h>
void main()
{
    float num1;
    float num2;
    printf("Enter number 1: ");
    scanf("%f",&num1);
    printf("Enter number 2: ");
    scanf("%f",&num2);
    if(num1>num2)
    {
        printf("Largest number is %f ",num1);
    }
    else if(num2>num1)
    {
        printf("Largest number is %f ",num2);
    }
    else if(num1==num2)
    {
        printf("Both number are equal");
    }
}
