//sum of all no divisible by 13.
#include<stdio.h>
void main()
{
int i,n;
int counter=0;
int sum = 0;

for (i=1;i<=100;)
{
    if(i%13==0)
    {
        counter = counter + 1;
        sum = sum + i;
    }

    i +=1;
}
printf("The sum of number divisible by 13 is: %d ",sum);
}
