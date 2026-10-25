#include<stdio.h>
void main()
{
    int n, sq, temp, div = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    sq = n * n;
    temp = n;

    /* Find the divisor to extract the last digits */
    while(temp > 0)
    {
        div = div * 10;
        temp = temp / 10;
    }

    if(sq % div == n)
    {
        printf("%d is an automorphic number.\n", n);
    }
    else
    {
        printf("%d is not an automorphic number.\n", n);
    }
}
