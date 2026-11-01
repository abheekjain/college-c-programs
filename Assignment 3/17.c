//Count +ve,-ve and zeroes in 20 values

#include<stdio.h>
void main()
{
    int i , num , pos=0,neg=0,zer=0;
    for (i=1;i<=20;i++){
        printf("Enter number n: ");
        scanf("%d",&num);
        if(num>0)
        {
            pos = pos +1;
        }
        if (num<0)
        {
            neg = neg +1;
        }
        if (num==0)
        {
            zer= zer + 1;
        }
    }
    printf("No of positive numbers are %d\n",pos);
    printf("No of negative numbers are %d\n",neg);
    printf("No of zeroes are %d\n",zer);



}
