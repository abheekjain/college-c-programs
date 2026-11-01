#include<stdio.h>
void main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str);

    printf("String vertically:\n");
    for(i = 0; str[i] != '\0'; i++)
    {
        printf("%c\n", str[i]);
    }
}
