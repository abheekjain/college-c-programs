#include<stdio.h>
void main()
{
float minutes  = 520.5;
int h_in_min = 60;
int totalh = minutes/h_in_min;
float extra = minutes - totalh*60 ;

printf("%.2f minutes is %d hours and %.2f minutes",minutes,totalh,extra);
}

