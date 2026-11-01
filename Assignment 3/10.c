//factorial
#include<stdio.h>
void main()
{
int i,n;
int factor = 1;
printf("Enter a natural no n: ");
scanf("%d",&n);
for (i=1;i<=n;)
{
    factor = factor * i;
    i +=1;
}
printf("Factorial is %d",factor);
}
