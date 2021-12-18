/* EXERCISE 012 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    // You have to fill in values ti a template letter.txt
    // letter.txt looks somethig like this:
    /*

    Thanks {{name}} for purchasing {{item}} from our outlet {{outlet}}.
    Please visit our outlet {{outlet}} for any kind of problem. We plan to
    serve you again soon.

    */

    // You have to read this file and replace these Values:
    /*

    {{name}} - Harry
    {{item}} - Table Fan
    {{outlet}} - Ram Lakshmi fan outlet

    */

    // Use file functions in c to accomplish the same

    FILE *template;
    FILE *letter;
    char string[30];

    char *occur[3] = {"{{name}}", "{{item}}", "{{outlet}}"};
    char *input[3] = {"Harry", "Table Fan", "Ram Lakshmi fan outlet"};

    template = fopen("template.txt", "r");
    letter = fopen("bill.txt", "w");
    
    while (feof(template) == 0)
    {
        fscanf(template, "%s", string);

        if (!strcmp(string, occur[0]))
        {
            printf("%s\n", string);
            fprintf(letter, "%s", input[0]);
        }
        else if (!strcmp(string, occur[1]))
        {
            printf("%s\n", string);
            fprintf(letter, "%s", input[1]);
        }
        else if (!strcmp(string, occur[2]))
        {
            printf("%s\n", string);
            fprintf(letter, "%s", input[2]);
        }

        else
        {
            // printf("%s|\n", string);
            fprintf(letter, "%s", string);
        }

        fprintf(letter, "%s", " ");
    }

    return 0;
}