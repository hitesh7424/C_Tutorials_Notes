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

    if (argc != 4)
    {
        printf("\nThree arguments requires:\n");
        printf(" \"./command <add/subtract/divide/multiply> num1 num2\"\n\n");
    }
    else
    {
        if (!strcmp("add", argv[1]))
        {
            printf("\n%d + %d = %d\n\n", atoi(argv[2]), atoi(argv[3]), atoi(argv[2]) + atoi(argv[3]));
        }
        else if (!strcmp("subtract", argv[1]))
        {
            printf("\n%d - %d = %d\n\n", atoi(argv[2]), atoi(argv[3]), atoi(argv[2]) - atoi(argv[3]));
        }
        else if (!strcmp("divide", argv[1]))
        {
            printf("\n%d / %d = %.3f\n\n", atoi(argv[2]), atoi(argv[3]), (float)(atoi(argv[2])) / (float)(atoi(argv[3])));
        }
        else if (!strcmp("multiply", argv[1]))
        {
            printf("\n%d x %d = %d\n\n", atoi(argv[2]), atoi(argv[3]), atoi(argv[2]) * atoi(argv[3]));
        }
        else
        {
            printf("\n*Error Arguments\n\n");
        }
    }

    return 0;
}