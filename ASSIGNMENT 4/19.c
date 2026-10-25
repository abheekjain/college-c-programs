#include<stdio.h>
void main()
{
    int i, key, found = 0;
    int a[5];

    printf("Enter 5 Integers.\n");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter value to search: ");
    scanf("%d", &key);

    for(i=0;i<=4;i++)
    {
        if(a[i] == key)
        {
            printf("Found %d at index %d\n", key, i);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Value not found.\n");
    }
}
