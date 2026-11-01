#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    int len;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);
    printf("Length of the string is: %d\n", len);
}
