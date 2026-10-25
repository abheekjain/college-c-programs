#include<stdio.h>
void main()
{
    int i, j, val, n = 5, found = 0;
    int a[10];

    printf("Enter 5 Integers.\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter value to delete: ");
    scanf("%d", &val);

    for(i=0; i<n; i++)
    {
        if(a[i] == val)
        {
            for(j=i; j<n-1; j++)
            {
                a[j] = a[j+1];
            }
            n--;
            found = 1;
            i--; /* Decrement i to correctly check the newly shifted element */
        }
    }

    if(found == 0)
    {
        printf("Value not found.\n");
    }
    else
    {
        printf("Array after deletion: ");
        for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
    }
}
