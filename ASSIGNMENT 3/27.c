//Factors of given no.
#include<stdio.h>
void main()
{
    int i , num;

    printf("Enter your number: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            printf("%d is a factor of %d. \n",i,num);
        }
    }











}
