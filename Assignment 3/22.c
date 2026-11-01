///Count how many digits are there in given no.
#include<stdio.h>
void main()
{
    int i ,  num,rem,count ;
    count=0;
    printf("Enter number n: ");
    scanf("%d",&num);

    while(num!=0)
    {
        rem=num%10;
        num = num / 10;
        count = count + 1;    }
    printf("The no of digits in given no are %d. ",count);


}

