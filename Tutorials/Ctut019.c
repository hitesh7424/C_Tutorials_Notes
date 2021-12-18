
// Functions

/*

What is a Function?

    > Functions are used to divide a large c program into smaller pieces.
    > A function can be called multiple times to provide reusability and modarity to c program.
    > Also called precedure or subroutine.

*/

/*

Function:Syntax

    > The basic syntx of a C function is written as folows:

        return_type finction_name(data_type parameter 1, data_tyoe parameter 2){
            //code to be executed
        }

*/

/*

Adantage of C Functions

    > We can avoid writing same logic through functions
    > We can divide work among programmers using functions
    > We can easily debug a program using functions

*/

/*

Declaration, Definition and Call

    > A function is declared to tell a compiler about its existence.
    > A function is defined to get some task done.
    > A function is called in order to be used.

*/

/*

Types of Functions

    > Library functions - Functions included inc header files.
    > User defined functions - Functions created by C programmer to reduce complexity
    of a program

*/

/*

Function code examples

    > Without arguments and without return value
    > Without arguments and with return value
    > With arguments and without return value
    > With arguments and with return value

*/

#include <stdio.h>

int sum(int a, int b);

void printstar(int n);

int takenumber();

void hello();

int main()
{
    int a, b, c, n, i;
    // a = 12;
    // b = 90;
    // n = 7;

    // printf("Enter 1st number: ");
    // scanf("%d", &a);

    // printf("Enter 2nd number: ");
    // scanf("%d", &b);

    // c = sum(a, b);
    // printf("\nThe sum is %d\n", c);

    // printf("How many stars do you want\n\t: ");
    // scanf("%d", &n);

    // printstar(n);

    // i = takenumber();

    // printf("The number entered is %d\n", i);

    hello();

    return 0;
}

// function With arguments and with return value

int sum(int a, int b)
{
    return a + b;
}

// function With arguments and without return value

void printstar(int n)
{
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
        if (i == n - 1)
        {
            printf("\n");
        }
    }
}

// function Without arguments and with return value

int takenumber()
{
    int i;
    printf("Enter a number: ");
    scanf("%d",&i);
    return i;
}

// Quiz
// function Without arguments and without return value

void hello()
{
    // This function will print 'Hello World!'.
    printf("Hello World!\n");
}