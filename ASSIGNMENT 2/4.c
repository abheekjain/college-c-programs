#include<stdio.h>
void main()
{
    int num1;
    printf("Enter number 1: ");
    scanf("%d",&num1);
    if(num1%7==0)
    {
        printf("%d is divisible by 7. ",num1);
    }
    else
    {
        printf("%d is not divisible by 7. ",num1);
    }
}
