#include<stdio.h>
void main()
{
    int i, num, n = 5;
    int a[10];

    printf("Enter 5 Integers.\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter value to insert at last: ");
    scanf("%d", &num);

    a[n] = num;
    n++;

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
