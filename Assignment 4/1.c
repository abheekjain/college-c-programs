#include<stdio.h>
void main()
{
    int i;
    int a[5];
    printf("Enter 5 Integers.\n");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=4;i++)
    {
        printf("%d ",a[i]);
    }
}
