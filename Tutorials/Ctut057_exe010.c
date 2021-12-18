/* Exercise 010 */

/* 

MATRIX MULTIPLICATION

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void MatrixMultiplication()
{
    int r1, c1, r2, c2;

    // Taking values for First Matrix
    printf("Enter the Order of First matrix \n");
    printf("\tRows   :");
    scanf("%d", &r1);
    printf("\tColumn :");
    scanf("%d", &c1);

    // Taking values for Second Matrix
    printf("Enter the Order of Second matrix \n");
    printf("\tRows   :");
    scanf("%d", &r2);
    printf("\tColumn :");
    scanf("%d", &c2);

    if (c1 == r2)
    {

        int matrix_first[r1][c1];
        int matrix_second[r2][c2];
        int matrix_result[r1][c2];

        printf("Enter the Elements of First Matrix :\n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                scanf("%d", &matrix_first[i][j]);
            }
        }
        printf("\n");

        printf("Enter the Elements of Second Matrix :\n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                scanf("%d", &matrix_second[i][j]);
            }
        }
        printf("\n");

        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                int value = 0, temp;
                for (int k = 0; k < c1; k++)
                {
                    temp = matrix_first[i][k] * matrix_second[k][j];
                    value = temp + value;
                }

                matrix_result[i][j] = value;
            }
        }
        printf("\n\n");
        printf("Matrix after multiplication is :\n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%d\t", matrix_result[i][j]);
            }
            printf("\n\n");
        }
    }
    else
    {
        // If Rows and Column are not equal then this will excuted
        printf("The given Matrix cannot be multiplied\n");
        printf("The Column of 1st Matrix should be equal to Rows of 2nd Matrix\n");
    }
}

void RulesAndConditions()
{
    printf(
        "Condition of Matrix Multiplication:\n"
        "\n"
        "    1. Multiplication of two Matrices is possible when the columns of \n"
        "       Matrix A is equal to Rows of Matrix B.\n"
        "\n"
        "       i.e. Column of Matrix A = Rows of Matrix B\n"
        "\n"
        "    2. If a Matrix of order 'm x n' is multiplied with another matrix \n"
        "       of order 'n x p' then the product Matrix will be of the order 'm x p'.\n"
        "\n"
        "       i.e Order of Product Matrix = Rows of 1st Matrix X Column of 2nd Matrix\n"
        "\n");

    printf(
        "Rules for Matrix Multiplication:\n"
        "1. The "
        "\n");
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char Choice;

    printf("Welcome to Matrix Multiplication Program\n");
    printf(
        "1. Matrix Multiplying\n"
        "2. Rules and Condition\n");

    printf("[1/2] :");
    scanf("%c", &Choice);
    getchar();
    printf("\n\n");

    if (Choice == '1')
    {
        MatrixMultiplication();
    }
    else if (Choice == '2')
    {
        RulesAndConditions();
    }
    else
    {
        printf("Invalid Input!\nTry Again.......\n\n");
        main();
    }

    return 0;
}