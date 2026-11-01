#include<stdio.h>
void main()
{
    int i, j, k;
    int a[2][2], b[2][2], c[2][2];

    printf("Enter 4 elements for first 2x2 matrix:\n");
    for(i=0;i<=1;i++)
        for(j=0;j<=1;j++)
            scanf("%d", &a[i][j]);

    printf("Enter 4 elements for second 2x2 matrix:\n");
    for(i=0;i<=1;i++)
        for(j=0;j<=1;j++)
            scanf("%d", &b[i][j]);

    printf("Resultant Matrix:\n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            c[i][j] = 0;
            for(k=0;k<=1;k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}
