#include<stdio.h>

int power(int a, int b)
{
    int p = 1, i;
    for(i=1; i<=b; i++)
    {
        p = p * a;
    }
    return p;
}

void main()
{
    int base, exp, result;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);

    result = power(base, exp);
    printf("%d raised to %d is %d\n", base, exp, result);
}
