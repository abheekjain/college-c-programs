#include<stdio.h>
void main()
{
    int i, n = 5;
    int a[10];

    printf("Enter 5 Integers.\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n-1; i++)
    {
        a[i] = a[i+1];
    }
    n--;

    printf("After deleting first element: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
