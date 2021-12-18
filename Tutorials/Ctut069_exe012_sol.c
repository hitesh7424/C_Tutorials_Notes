/* EXERCISE 12 SOLUTION */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *replaceWord(const char *str, const char *oldWord, const char *newWord)
{
    char *resultString;
    int i, count = 0;
    int oldWordLength = strlen(oldWord);
    int newWordLength = strlen(newWord);
    // Lets count the number of times old word occurs in the string
    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], oldWord) == &str[i])
        {
            count++;

            // Jump over this word
            i = i + oldWordLength - 1;
        }
    }

    // Making a now string to fit in the replaces words
    resultString = (char *)malloc(i + count * (newWordLength - oldWordLength + 1));

    i = 0;
    while (*str)
    {
        // Compare the substring with result
        if (strstr(str, oldWord) == str)
        {
            strcpy(&resultString[i], newWord);
            i += newWordLength;
            str += oldWordLength;
        }
        else
        {
            // printf("%s\n\n", resultString);
            resultString[i] = *str;
            i++;
            str++;
        }
    }
    resultString[i] = '\0';
    return resultString;
}

int main()
{
    FILE *ptr1 = NULL;
    FILE *ptr2 = NULL;
    ptr1 = fopen("template.txt", "r");
    ptr2 = fopen("genbill.txt", "w");
    char str[200];

    while (1)
    {
        char strTemp[100];
        fgets(strTemp, 100, ptr1);
        if (feof(ptr1) != 0)
        {
            break;
        }
        strcat(str, strTemp);
    }
    // strcat(str, "\n");

    // printf("The given bill template was: \n%s\n", str);

    // Call the replace function and generate nowStr
    char *newStr;
    newStr = replaceWord(str, "{{name}}", "Harry");
    newStr = replaceWord(newStr, "{{item}}", "Table Fan");
    newStr = replaceWord(newStr, "{{outlet}}", "Ram Lakshmi Fan Outlet");
    fputs(newStr, ptr2);

    // fprintf(ptr2, "%s", newStr);
    // printf("The generated bill template is: \n%s\n", newStr);

    fclose(ptr1);
    fclose(ptr2);

    printf("\nReceipt named \"genbill.txt\" created with name \"Harry\".\n\n");
    return 0;
}