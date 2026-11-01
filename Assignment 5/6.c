#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100], str2[100];
    int res;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    res = strcmp(str1, str2);

    if(res == 0)
        printf("Both strings are same.\n");
    else if(res > 0)
        printf("First string is greater than second string.\n");
    else
        printf("First string is lower than second string.\n");
}
