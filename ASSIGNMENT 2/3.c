#include<stdio.h>
void main()
{
    int gsales;
    int nsales;
    int deduction;
    int allowance;
    printf("Enter your gross sales ");
    scanf("%d",&gsales);

    if (gsales>10000)
    {
        allowance = gsales*0.1;
        deduction = gsales * 0.03;
        nsales = gsales + allowance - deduction;
        printf("The net sales is %d",nsales);
    }
    if (gsales<=10000 && gsales>5000)
    {
        allowance = gsales*0.07;
        deduction = gsales * 0.02;
        nsales = gsales + allowance - deduction;
        printf("The net sales is %d",nsales);
    }
    if (gsales<=5000)
    {
        allowance = gsales*0.05;
        deduction = gsales * 0.0;
        nsales = gsales + allowance - deduction;
        printf("The net sales is %d",nsales);
    }
}
