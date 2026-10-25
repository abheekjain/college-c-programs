//Calculate sum and mean of any 10 values
#include<stdio.h>
void main()
{
    int i , sum, num ;
    float mean;
    sum= 0;
    for (i=1;i<=10;i++){
        printf("Enter number n: ");
        scanf("%d",&num);
        sum = sum + num;
        mean = sum /10;
    }
    printf("Sum of 10 values = %d\n",sum);
    printf("Mean of 10 values = %f\n",mean);


}
