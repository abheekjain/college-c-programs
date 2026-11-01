//Reverse of digits of given no.
#include<stdio.h>
void main()
{
    int i ,  num,rem,rev ;
    rev=0;
    printf("Enter number n: ");
    scanf("%d",&num);

    while(num!=0)
    {
        rem=num%10;
        rev = rev*10 + rem;
        num = num / 10;
          }
    printf("The reverse of digits in given no is %d. ",rev);


}
