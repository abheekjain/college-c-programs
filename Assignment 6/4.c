#include<stdio.h>

void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("Inside function (after swap): x = %d, y = %d\n", x, y);
}

void main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Before function call (in main): a = %d, b = %d\n", a, b);
    swap(a, b);
    printf("After function call (in main): a = %d, b = %d\n", a, b);
}
