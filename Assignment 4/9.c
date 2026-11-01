#include<stdio.h>
void main()
{
    int i, temp;
    int a[5];
    printf("Enter 5 Integers.\n");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<=2;i++)
    {
        temp = a[i];
        a[i] = a[4-i];
        a[4-i] = temp;
    }

    printf("Reversed array: ");
    for(i=0;i<=4;i++)
    {
        printf("%d ",a[i]);
    }
}
