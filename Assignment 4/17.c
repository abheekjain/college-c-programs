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

    n--; /* Deleting from the last position simply means ignoring the last index */

    printf("After deleting last element: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
