/* Call by value & call by reference */

/*

ACTUAL AND FORMAL PARAMETERS

    > When a function is called, by values (expressions) that are passed in the call are called argumants or actual parameters
    > Formal parameters are local variables which are assigned values from the arguments when the function is called.

*/

/*

TYPES OF FUNCTION CALLED IN C PROGRAMMING

    > IN C programming language, we can call a function in two different ways, based on how we specify the arguments, and these two ways are:
        > Call by Value
        > Call by Reference

*/

/*

CALL BY VALUE

    > When we call a function by value, it means that we are passing the values of the arguments which are copied into the formal parameters of the function.
    > Which means that the origional values remain unchanged and only the parameters insibe the function changes.

*/

/*

CALL BY REFERENCE

    > The call by reference method of passing arguments to a C function copies the address of arguments into the formal parameters.
    > Addresses of actual arguments are copied and then assigned to the corresponding formal arguments.

*/

/* CALL BY REFERENCE: EXAMPLE */
/*
#include <stdio.h>

// function defined to swap the values

void swap(int *x,int *y)
{
    int temp;
    temp = *x; // save the value at address x
    *x = *y;   // put y into x
    *y = temp; // put temp into y

    return;
}

int main()
{
    int a = 34, b = 72;
    printf("%d and %d\n", a, b);
    swap(&a, &b);
    printf("%d and %d\n", a, b);

    return 0;
}
*/

/* Lets code */

#include <stdio.h>

void changeValue(int *address)
{
    *address = 3456;
}

int main()
{
    int a = 34;
    printf("the value of a is %d\n", a);
    changeValue(&a);
    printf("Now value of a is %d\n", a);
    return 0;
}


/* Quick Quiz */
/* 

Given two numbers a and b, add them then substract them and assign them to a and b using call by reference.

a = 5
b = 3

after runnig program
a = 8
b = 2

solution in "C_Exercise/Cexe005.c"
*/


