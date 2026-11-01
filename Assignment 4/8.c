#include<stdio.h>
void main()
{
    int i, j = 0;
    int a[5];
    int b[10] = {0};

    printf("Enter 5 Integers.\n");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<=4;i++)
    {
        b[j] = a[i];
        j = j + 2;
    }

    printf("Target array elements:\n");
    for(i=0;i<=9;i++)
    {
        printf("%d ",b[i]);
    }
}
