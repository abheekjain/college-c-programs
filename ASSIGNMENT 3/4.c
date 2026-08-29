//Print 1st n natural numbers
#include<stdio.h>
void main()
{
int i;
int n;
printf("Enter natural number n: ");
scanf("%d",&n);
for(i=1;i<=n;)
{
    printf("%d\n",i);
    i += 1;
}
}

