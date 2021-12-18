/* EXERCISE 6 */

/* 

html parser
Input:
<h1> This is a heading </h2>

Output:
This is a heading

Input:
<span> This is a heading2 </span>

Output:
This is a heading2

*/

#include <stdio.h>
#include <string.h>

void parser(char *string)
{
    int in = 0; // Variable to track whether we are inside the tag
    int index = 0;

    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0';

    //Remove teh trailing spaces form the begining
    while (string[0] == ' ')
    {
        for (int i = 0; i < strlen(string); i++)
        {
            string[i] = string[i + 1];
        }
    }

    //Remove teh trailing spaces form the begining
    while (string[strlen(string) - 1] == ' ')
    {
        string[strlen(string) - 1] = '\0';
    }
}

int main()
{
    // char string[] = "<h1>  This is a heading  </h1>";
    // char string2[] = "<span>  This is a heading2 </span>";

    // parser(string);
    // parser(string2);

    // printf("Output1:\n~~%s~~\n\n", string);
    // printf("Output2:\n~~%s~~\n", string2);

    char string[300];
    printf("Enter HTML string\n>");
    gets(string);

    parser(string);

    printf("Parsed html string is:\n\n%s\n", string);

    return 0;
}