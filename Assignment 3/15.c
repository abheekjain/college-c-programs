//Calculate sum and mean of n values
#include<stdio.h>
void main()
{
    int i , sum, num ,n;
    float mean;
    sum= 0;
    printf("Enter no of values you want to enter: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        printf("Enter number : ");
        scanf("%d",&num);
        sum = sum + num;
    }
    mean = (float)sum /n;


    printf("Sum of n values = %d\n",sum);
    printf("Mean of n values = %f\n",mean);


}

