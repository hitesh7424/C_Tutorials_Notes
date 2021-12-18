// prize distribution to passed student

// maths and science - 45 INR
// science - 15 INR
// maths - 15

// print the type of gift you are giving to them

#include <stdio.h>

int main()
{
    int a;
    printf(
        "PRIZE DISTRIBUTION\n"
        "Subjects are =>\n"
        "\t>Science\n"
        "\t>Maths\n"
        "In how many subject you have passed?\n"
        "press '0', '1', '2'\n");
    scanf("%d", &a);

    if (a == 2)
    {
        printf(
            "\nCONGRATULATIONS! YOU PASSED BOTH SUBJECT\n"
            "Your prize is 45 rupees.\n");
    }

    else if (a == 1)
    {
        printf(
            "\nGOOD! YOU PASSED ONE SUBJECT\n"
            "Your prize is 15 rupees");
    }

    else if (a == 0)
    {
        printf(
            "\nBAD TO NOTFY YOU THAT\n"
            "There is no prize for you.\n"
            "Better luck next time\n");
    }

    else
    {
        printf("\nINVALID INPUT!");
    }

    return 0;
}

// Quiz completed