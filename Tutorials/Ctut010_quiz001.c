/*

C if else Statements -> control statements

=> It is used to perform operation based on some conditions.

    Types of if Statements
    1> if statement
    2> if else statement
    3> if -else if ladder
    4> Nested if

FLOWCHART = Flowcharts/Ctut010_flowchart_if-statement.png

*/

/*

# include <stdio.h>

int main()
{
    int age;
    printf("I am trafic AI\n");
    printf("Enter your age\n");
    scanf("%d", &age);

    if (age>=18)
    {
        printf(
            "you can drive any motor vehicles.\n"
            "If you know how to drive\n"
            "After taking Driving Liscense\n"
        );
    }

    else if (13<age && age<18)
    {
        printf(
            "You should not drive motor vehicle\n"
            "as law says, it depend on you.\n"
            "you can cycling it is better.\n"
        );
    }

    else if (7<=age<=14)
    {
        printf(
            "You can ride only bicycles\n"
        );
    }

    else if (age<=7)
    {
        printf("You can enjoy rinding Tricycle.");
    }
    
    else
    {
        // You can leave else if it's not required.
        printf("you can ride tricycles");
    }
    
    return 0;
}

*/

// Quiz

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
            "\nCONGRATULATIONS! YOU PASSED IN BOTH SUBJECT\n"
            "Your prize is 45 rupees.\n");
    }

    else if (a == 1)
    {
        printf(
            "\nGOOD! YOU PASSED ONE SUBJECT\n"
            "Your prize is 15 rupees\n");
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
        printf("\nINVALID INPUT!\n");
    }

    return 0;
}

// Quiz completed
