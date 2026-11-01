#include<stdio.h>

void findMaxMin(int arr[], int n, int *max, int *min)
{
    int i;
    *max = arr[0];
    *min = arr[0];

    for(i=1; i<n; i++)
    {
        if(arr[i] > *max)
            *max = arr[i];
        if(arr[i] < *min)
            *min = arr[i];
    }
}

void main()
{
    int a[5], i, max_val, min_val;

    printf("Enter 5 integers:\n");
    for(i=0; i<=4; i++)
    {
        scanf("%d", &a[i]);
    }

    findMaxMin(a, 5, &max_val, &min_val);

    printf("Maximum value in array: %d\n", max_val);
    printf("Minimum value in array: %d\n", min_val);
}
