/* QUICK QUIZ  */

/* 

allow user to enter two strings and then concatenate them by saying that
str1 is a friend of str2

*/

#include <stdio.h>
#include <string.h>

void combineStr(char str1[], char str2[], char str3[])
{

    int num1 = strlen(str1) + strlen(str2) + strlen(str3);

    for (int i = 0; i < num1 + 6; i++)
    {
        if (i == 0 || i == num1 + 5)
        {
            printf("|");
        }
        else
        {
            printf("‾");
        }
    }

    printf("\n＞ %s ＜\n", strcat(str1, strcat(str3, str2)));

    for (int i = 0; i < num1 + 6; i++)
    {
        if (i == 0 || i == num1 + 5)
        {
            printf("|");
        }
        else
        {
            printf("_");
        }
    }
    printf("\n");
}

int main()
{
    char name1[30];
    char name2[30];
    char str[] = " is a friend of ";

    printf("Enter required details >\n\n");
    printf("your_name> ");

    gets(name1);

    printf("\nfriend's_name> ");
    gets(name2);

    combineStr(name1, name2, str);

    return 0;
}