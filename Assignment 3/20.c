//Print sum of all integers from 1 to 100 which are divisible by 3.
#include<stdio.h>
void main()
{
    int i , sum ;
    sum=0;
    for (i=1;i<=100;i++){

        if (i%3==0)
        {
            sum = sum + i;

        }

    }
    printf("The sum of numbers divisible by 3 is %d. ",sum );

}



