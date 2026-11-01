#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    int i, a = 0, e = 0, idx_i = 0, o = 0, u = 0;

    printf("Enter a string: ");
    gets(str);

    strlwr(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        switch(str[i])
        {
            case 'a': a++; break;
            case 'e': e++; break;
            case 'i': idx_i++; break;
            case 'o': o++; break;
            case 'u': u++; break;
        }
    }

    printf("Vowel Frequencies:\n");
    printf("a: %d\n", a);
    printf("e: %d\n", e);
    printf("i: %d\n", idx_i);
    printf("o: %d\n", o);
    printf("u: %d\n", u);
}
