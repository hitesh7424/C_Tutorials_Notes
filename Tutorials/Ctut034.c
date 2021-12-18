/* STRINGS IN C */

/* 

IS STRING A DATA TYPE IN C?

    > No
    > We have char, int, float, and other types but no 'string' data type in C
    > String is not supported data type in C but it is a very useful concept used to madel real entities like name, city etc.
    > We express strings using an array of characters terminated by a null character ('\0').

*/

/* 

WHAT ARE STRINGS IN C

    > String: array of characters terminated by NULL character
    > Strings in C is created by creating an array of characters
    > We need an extra character ('\0' or null character) to tell the compiler that the string ends here.

*/

/* 

CREATING STRINGS IN C

    > We can create a character array in the following ways:
        > char name[] = "hitesh";
        > char name[] = {'h', 'i', 't', 'e', 's', 'h', '\0'};

*/

#include <stdio.h>

void printStr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}

int main()
{
    // char str[] = {'h', 'i', 't', 'e', 's', 'h', '\0'};
    // char str[] = "hitesh";
    char str[32];
    printf("Write string\n> ");
    gets(str);
    printf("Using a custom function printStr:\n");
    printStr(str);
    printf("\nUsing printf:\n%s\n\n", str);
    printf("Using puts:\n");
    puts(str);

    return 0;
}

