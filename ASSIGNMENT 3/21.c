//separate digits of a given no.#include<stdio.h>
void main()
{
    int i ,  num,rem ;
    printf("Enter number n: ");
    scanf("%d",&num);

    while(num!=0)
    {
        rem=num%10;
        printf("%d ",rem);
        num = num / 10;
    }


}
