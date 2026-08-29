//Print 1st n odd natural numbers
#include<stdio.h>
void main()
{
int i;
int n;
printf("Enter natural number n: ");
scanf("%d",&n);
for(i=1;i<=2*n;)
{
    printf("%d\n",i);
    i += 2;
}
}


