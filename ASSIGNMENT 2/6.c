#include<stdio.h>
void main()
{
    float mathmarks;
    float phymarks;
    float chemmarks;
    float average;
    float total;
    printf("Enter mathematics marks out of 100\n");
    scanf("%f",&mathmarks);
    printf("Enter physics marks out of 100 \n");
    scanf("%f",&phymarks);
    printf("Enter chemistry marks out of 100 \n");
    scanf("%f",&chemmarks);
    total = mathmarks + phymarks + chemmarks;
    average = total/3;
    printf("Your total marks are %.2f/300 \n",total);
    printf("Your average marks are %.2f \n",average);
    if(average<35 || mathmarks<35 || phymarks<35 || chemmarks<35)
    {
        printf("You failed.\n ");
    }
    else if(average>=70)
    {
        printf("You passed with distinction\n ");
    }
    else if(average>=60)
    {
        printf("You passed with first class\n ");
    }
    else if(average>=50)
    {
        printf("You passed with second class\n ");
    }
    else if(average>=35)
    {
        printf("You passed with third class\n ");
    }

}
