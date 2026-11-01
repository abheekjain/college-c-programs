
#include<stdio.h>
void main()
{
    int i, n, dir;
    int a[10], temp[10] = {0}; /* Padded with 0s by default */

    printf("Enter 10 Integers.\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter number of positions to shift: ");
    scanf("%d", &n);
    printf("Enter 1 for Left Shift, 2 for Right Shift: ");
    scanf("%d", &dir);

    if(dir == 1) /* Left Shift */
    {
        for(i=0; i<10-n; i++) temp[i] = a[i+n];
    }
    else /* Right Shift */
    {
        for(i=n; i<10; i++) temp[i] = a[i-n];
    }

    printf("Shifted Array: ");
    for(i=0;i<=9;i++)
    {
        a[i] = temp[i];
        printf("%d ", a[i]);
    }
}
