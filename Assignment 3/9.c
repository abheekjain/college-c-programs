//Print sum of 1st n even natural numbers
#include<stdio.h>
void main()
{
int i;
int n;
int sum;

sum = 0;

printf("Enter natural number n: ");
scanf("%d",&n);

for(i=2;i<=2*n;)
{
    sum = sum + i;

    i += 2;
}

    printf("The sum of first %d even natural numbers is %d.\n",n,sum);

}



