/* WILD POINTER IN C */

/* 

WHAT IS WILD POINTER?

    > Uninitialized pointers are known as wild pointers.
    > These pointers points to some arbitrary location in memory and may cause a program crash or behave badly.
    > Derefrencing wild pointers can cause nasty bugs
    > It is suggested to always initialize unused pointers to NULL.

*/

/* 

AN EXAMPLE PROGRAM

    > In the following program, ptr is a wild pointer until it is given the address of a.

        int a = 3;
        int *ptr; // Wild pointer
        ptr = &a; // No longer wild pointer

*/

/* 

LETS CODE

    > We can avoid wild pointers and handle them appropiately to write powerful C programs.
    > Lets go to our IDE and write some code.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 234;
    int *ptr;  // This is a wild pointer
    // *ptr = 24; // This is not a good thing to do

    ptr = &a; // ptr is no longer a wild pointer

    printf("The value of a is %d\n", *ptr);

    return 0;
}