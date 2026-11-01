#include<stdio.h>
void main()
{
    int i, pos, n = 5;
    int a[10];

    printf("Enter 5 Integers.\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter position to delete (0 to %d): ", n-1);
    scanf("%d", &pos);

    for(i=pos; i<n-1; i++)
    {
        a[i] = a[i+1];
    }
    n--;

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
