#include<stdio.h>
void main()
{
    int i, num, pos, n = 5;
    int a[10];

    printf("Enter 5 Integers.\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter value to insert: ");
    scanf("%d", &num);
    printf("Enter position (0 to %d): ", n);
    scanf("%d", &pos);

    for(i=n; i>pos; i--)
    {
        a[i] = a[i-1];
    }
    a[pos] = num;
    n++;

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
