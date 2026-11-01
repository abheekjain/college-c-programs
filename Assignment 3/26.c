#include<stdio.h>
void main()
{
    int i , sum , rem,num,original;
    sum = 0;

    printf("Enter your number: ");
    scanf("%d",&num);

    original = num;
    while(num!=0){
            rem = num%10;
            sum = sum + (rem*rem*rem);
            num = num/10;
    }
    if (original==sum)
    {
        printf("The number is armstrong no. ");
    }
    else
    {
        printf("The number is not a armstrong no. ");
    }
}
