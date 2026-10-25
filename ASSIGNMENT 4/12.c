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

    printf("Enter number to insert at beginning: ");
    scanf("%d", &num);

    for(i=n; i>0; i--)
    {
        a[i] = a[i-1];
    }
    a[0] = num;
    n++;

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
