//Find out largest and smallest value out of 10 numbers
#include<stdio.h>
void main()
{
    int i , num , largest,smallest;
    largest = 0;
    smallest= 32767;
    for (i=1;i<=10;i++){
        printf("Enter number n: ");
        scanf("%d",&num);
        if(num>largest)
        {
            largest=num;
        }
        if (num<smallest)
        {
            smallest = num;
        }
    }
    printf("Smallest number is %d\n",smallest);
    printf("Largest number is %d\n",largest);


}
