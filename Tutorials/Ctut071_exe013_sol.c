#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // You have to create command line utility to add/subtract/divide/multiply two numbers
    // First command line argu,ent of your c program must be the operation.
    // The next arguments of being the two numbers. For example:
    // >> command.c add 45 5
    // >> 50

    char *operation;
    int num1, num2;
    operation = argv[1];
    num1 = atoi(argv[2]);
    num2 = atoi(argv[3]);

    // printf("\nOperation is %s\n", operation);
    // printf("Num1 is %d\n", num1);
    // printf("Num2 is %d\n\n", num2);

    if (strcmp(operation, "add") == 0)
    {
        printf("%d\n", num1 + num2);
    }
    if (strcmp(operation, "subtract") == 0)
    {
        printf("%d\n", num1 - num2);
    }
    if (strcmp(operation, "multiply") == 0)
    {
        printf("%d\n", num1 * num2);
    }
    if (strcmp(operation, "divide") == 0)
    {
        printf("%d\n", num1 / num2);
    }

    return 0;
}