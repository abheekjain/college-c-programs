#include<stdio.h>
void main()
{
    float num1;
    float num2;
    float num3;
    printf("Enter number 1: ");
    scanf("%f",&num1);
    printf("Enter number 2: ");
    scanf("%f",&num2);
    printf("Enter number 3: ");
    scanf("%f",&num3);
    if(num1>num2 & num1>num3)
    {
        printf("The largest number is %f\n",num1);
    }
    if(num2>num1 & num2>num3)
    {
        printf("The largest number is %f\n",num2);
    }
    if(num3>num2 & num1<num3)
    {
        printf("The largest number is %f\n",num3);
    }
    if(num1<num2 & num1<num3)
    {
        printf("The smallest number is %f\n",num1);
    }
    if(num1>num2 & num2<num3)
    {
        printf("The smallest number is %f\n",num2);
    }
    if(num3<num2 & num1>num3)
    {
        printf("The smallest number is %f\n",num3);
    }
}
