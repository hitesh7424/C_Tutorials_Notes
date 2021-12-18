/* VOID POINTER IN C */

/* 

What is void pointer?

    > A void poiner is a pointer that has no data type associated with it.
    > A void can easily typecasted to any pointer type.
    > In simple it is a general purpose pointer variable.

*/

/* 

VOID POINTER: C PROGRAM

    A void pointer is a pointer that has no data type associated with it.
    A void pointer can be easily typecasted to any pointer type.

    int x = 10;
    char y = 'a';

    void *p = &x;    // void pointer stores address of int 'x'
    p = &y;  // void pointer stores address of int 'x'

*/

/* 

USES OF VOID POINTERS

    > In a dynamic memory allocation, malloc() and calloc() return (void *) type pointer
    > This allows these dynamic memory functions to be used to allocate memory of any data type. This is because these pointers can be typecasted to any pointer type.

*/

/* 

MORE ON VOID POINTERS

    > It is not possible to dereference void pointers.
    > Pointer arithmetic is not allowed in C standards with void poiners.
    > Hence it is not recomended to use pointer arithmetic with void pointers.

*/

/* 

LETS CODE

    We can use void pointers so write powerful C programs.
    Lets go to our IDE and write some code.

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int a = 345;
    float b = 8.3;
    void *ptr;
    ptr = &a;
    printf("the value of a is %d\n", *((int *)ptr));
    ptr = &b;
    printf("the value of a is %f\n", *((float *)ptr));

    return 0;
}