#include<stdio.h>
void main()
{
    int gsales;
    int nsales;
    int discount;
    printf("Enter your gross sales ");
    scanf("%d",&gsales);
    if (gsales>20000)
    {
        discount = gsales*0.15;
        nsales = gsales - discount;
        printf("Your net sales is %d",nsales);
    }
    else if (gsales>10000)
    {
        discount = gsales*0.1;
        nsales = gsales - discount;
        printf("Your net sales is %d",nsales);
    }
    else
    {discount = gsales*0.05;
    nsales = gsales - discount;
        printf("Your net sales is %d",nsales);}
}
