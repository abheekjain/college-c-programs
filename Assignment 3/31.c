// Summation of Prime numbers from 1 to 500
#include <stdio.h>

void main()
{
    int i, flag, num,sum;
    sum = 0;
    for (num = 2; num <= 500; num++)
    {
        flag = 0;

        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            sum = sum + num;
        }
    }
    printf("Sum is %d.",sum);
}
