#include<stdio.h>
#include<string.h>
void main()
{
    char str1[100], str2[100];

    printf("Enter a string: ");
    gets(str1);

    strcpy(str2, str1);
    strrev(str2);

    if(strcmp(str1, str2) == 0)
        printf("The string is a Palindrome.\n");
    else
        printf("The string is not a Palindrome.\n");
}
