/*

Exercise 4

Take input from user and ask user to choose 0 for triangular star pattern and 1 for reversed triangular star pattern
Then print the pattern accordingly
*
**
***
****  -> triangular star pattern 


*****
****
***
**
*   -> reversed triangular star pattern

*/

#include <stdio.h>

int main()
{
    int num_star, input;
    printf("How many star do  you want to print\n\t> ");
    scanf("%d", &num_star);
    printf("Which pattern dou want to print ->\n\t0. Triangular Star Pattern \n\t1. Reversed Triangular Star Pattern \n\t2. both\n");
    printf("input> ");
    scanf("%d", &input);
    printf("\n\n");
    switch (input)
    {
    case 0:
        for (int i = 1; i < num_star + 1; i++)
        {
            int count = 1;
            while (count < (i + 1))
            {
                printf("*");
                count++;
            }
            printf("\n");
        }
        printf("\n\n");
        printf("leave blank and press enter for exit\n");
        main();
        break;

    case 1:

        for (int i = num_star; i > 0; i--)
        {
            int count = 1;
            while (count < (i + 1))
            {
                printf("*");
                count++;
            }
            printf("\n");
        }
        printf("\n\n");
        printf("leave blank and press enter for exit\n");
        main();
        break;

    case 2:


        for (int i = 1; i < num_star + 1; i++)
        {
            int count = 1;
            while (count < (i + 1))
            {
                printf("*");
                count++;
            }
            printf("\n");
        }
        printf("\n");

        for (int i = num_star; i > 0; i--)
        {
            int count = 1;
            while (count < (i + 1))
            {
                printf("*");
                count++;
            }
            printf("\n");
        }
        printf("\n\n");
        printf("leave blank and press enter for exit\n");
        main();        
        break;

    default:
        printf("bye bye\n");
        break;
    }

    return 0;
}

/*

  *
 ***
*****

*/