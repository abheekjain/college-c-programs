//Check whether given no. is palindrome or not
#include<stdio.h>
void main()
{
    int i ,  num,rem,rev,original ;
    rev=0;

    printf("Enter number n: ");
    scanf("%d",&num);

    original = num;
    while(num!=0)
    {
        rem=num%10;
        rev = rev*10 + rem;
        num = num / 10;
          }
    if (original==rev)
    {
        printf("The no. is palindrome.");
    }
    else
    {
        printf("The no. is not palindrome.");
    }


}

