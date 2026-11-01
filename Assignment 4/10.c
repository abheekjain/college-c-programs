#include<stdio.h>
void main()
{
    int i, j, count;
    int a[10], visited[10] = {0};

    printf("Enter 10 Integers.\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<=9;i++)
    {
        if(visited[i] == 1) continue;

        count = 1;
        for(j=i+1;j<=9;j++)
        {
            if(a[i] == a[j])
            {
                count++;
                visited[j] = 1;
            }
        }
        printf("Frequency of %d is %d\n", a[i], count);
    }
}
