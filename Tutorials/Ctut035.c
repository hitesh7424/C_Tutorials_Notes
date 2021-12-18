/* STRING FUNCTIONS IN C (#include<string.h>) */

/* 

C LIBRARY: <string.h>

function        use

strcat()        This function is used to concatenate or combine two given strings
strlen()        This function is used to show length of a string
strrev()        This function is used to show reverse of a string
strcpy()        This function is used to copy one string into another
strcmp()        This function is used to compare two given strings

*/

/* 

in <stdio.h>
    > printf
    > scanf
    > gets
    > puts

    etc.

*/

#include <stdio.h>
#include <string.h>

char *strrev(char *str)
{
    char *p1, *p2;

    if (!str || !*str)
        return str;
    for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
    {
        *p1 ^= *p2;
        *p2 ^= *p1;
        *p1 ^= *p2;
    }

    return str;
}

int main()
{
    char s1[] = "harry";
    char s2[] = "hitesh";
    char s3[54];

    // printf("\nstrcat(s1, s2) returns ");
    // puts(strcat(s1, s2));

    // printf("\nThe length of s1 is %d\n", strlen(s1));
    // printf("\nThe length of s2 is %d\n", strlen(s2));

    // printf("\nstrrev(s1) returns ");
    // puts(strrev(s1));
    // printf("\nstrrev(s2) returns ");
    // puts(strrev(s2));

    // printf("\nstrcpy(s3, strcat(s1,s2) copy the srings in strcat(s1, s2) \nand returns ");
    // strcpy(s3, strcat(s1,s2));
    // puts(s3);

    printf("\nThe strcmp(s2,s1) returned %d\n", strcmp(s2, s1));

    return 0;
}

// Quick quiz in C_Quiz/Cquiz004.c