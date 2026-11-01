//Summation of digits of given no.
#include<stdio.h>
void main()
{
    int i ,  num,rem,sum ;
    sum=0;
    printf("Enter number n: ");
    scanf("%d",&num);

    while(num!=0)
    {
        rem=num%10;
        num = num / 10;
        sum = sum + rem;    }
    printf("The sum of digits in given no is %d. ",sum);


}
