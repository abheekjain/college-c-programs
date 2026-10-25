//Find out how many boys and girls are there in class of 50 students.
#include<stdio.h>
void main()
{
    int i , boys, girls, num ;
    boys =0;
    girls = 0;


    for (i=1;i<=50;i++){
        printf("Enter 1 for female and 2 for male: ");
        scanf("%d",&num);
        if (num==1)
        {
            girls = girls +1;

        }
        if (num==2)
        {
            boys = boys +1;

        }
    }
    printf("No of boys are %d\n",boys);
    printf("No of girls are %d\n",girls);


}

