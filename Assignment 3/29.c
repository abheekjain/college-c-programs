//Prime or not
#include<stdio.h>
void main()
{
    int i , num,flag;
    flag = 0;
    printf("Enter your number: ");
    scanf("%d",&num);
    if (num==0 || num==1)
    {
        flag = 1;
    }
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            flag = 1;
        }
    }
    if (flag==1)
    {
        printf("No. is not prime.");
    }
    else
    {
        printf("No. is prime.");
    }

}

