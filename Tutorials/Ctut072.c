/* FUNCTION POINTERS IN C */

/*

POIMTERS

> A pointer is a variable which stores address of another variable.
> & symbol is used to get the address of the variable.
> * symbol is used to get the value of the variable that the pointer is pointing to.
> In C, we can create generic pointers too
> Regular C variable stores the value whereas pointer stores the address of the variable.

*/

/*

DYNAMIC MEMORY ALLOCATION: RECAP

> An statically allocated variable or array has a fixed size in memory.
> DYNAMIC MEMORY ALLOCATION ia a way in which the size of a data structure
    can be changed during runtime.
> Memory assigned to a program in a typical architecture can be broken down into
    four segments:
      1. Code
      2. Static/global variable
      3. Stack
      4. Heap

*/

/*

FUNCTION POINTERS

> We can have pointers pointing to functions as well
> Function pointers are useful to implement callback functions
> Compilers takes one or more source files and converts them to machine code.

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}

void greet()
{
    printf("Hello world my user good morning\n");
}

int main(int argc, char const *argv[])
{

    printf("Sum of 1 and 2 is %d\n", sum(1, 2)); // Testing the function

    int (*fPtr)(int, int); // Declaring a function pointer
    fPtr = &sum;           // Creating a function pointer
    int d = (*fPtr)(4, 6); // Dereferenceing a function pointer
    printf("The value of d is %d\n", d);

    // fPtr = &greet // This will get error

    return 0;
}
