#include <stdio.h>

void starPattern(int rows)
{
    for (int i = 0; i <= rows; i++)
    {

        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n\n");
}

void reversePattern(int rows)
{
    for (int i = rows; i > 0; i--)
    {
        for (int j = 0; j < (rows - i); j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    int rows, type;

    printf("enter \n\n");

    // printf("How many rows do you want>\nrows> ");
    scanf("%d", &type);

    switch (type)
    {
    case 0:
        starPattern(rows);
        break;

    case 1:
        reversePattern(rows);
        break;

    default:
        break;
    }

    return 0;
}