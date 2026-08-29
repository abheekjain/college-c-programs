//Print sum of n natural numbers
#include<stdio.h>
void main()
{
int i;
int n;
int sum;

sum = 0;

printf("Enter natural number n: ");
scanf("%d",&n);

for(i=1;i<=n;)
{
    sum = sum + i;

    i += 1;
}

    printf("The sum of first %d natural numbers is %d.\n",n,sum);

}



