#include<stdio.h>
void main()
{
    int i, j;
    int a[4][4], t[4][4];

    printf("Enter 16 elements for 4x4 matrix:\n");
    for(i=0;i<=3;i++)
        for(j=0;j<=3;j++)
            scanf("%d", &a[i][j]);

    for(i=0;i<=3;i++)
        for(j=0;j<=3;j++)
            t[j][i] = a[i][j];

    printf("Transposed Matrix:\n");
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
            printf("%d ", t[i][j]);
        printf("\n");
    }
}
