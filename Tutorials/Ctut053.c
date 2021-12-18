/* NULL POINTER IN C */

/* 

WHAT IS A NULL POINTER?

    > Null pointer is a pointer which has a value reserved for indicating that the pointer or reference does not refer to a valid object.
    > A null pointer is guaranteed to compare unequal to any poiner that points to a valid object.
    > Derefrencing a null pointers is defined behavior in C, and a conforming implementation is allowed to assume thatis derefrenced is not null.
    > NULL pointer is a specific pointer which is mentioned in C standard and it has specific purposes.
    > NULL pointer gives a functionality to C programer to check whether a pointer is legitimate or not.

*/

/* 

NULL POINTER: C PROGRAM

    > A null pointer is a pointer that points to NULL(nothing).
    > A nullpointer should be derefrenced.
    > A check must be run by the progrsmmer to know whether a pointer is null before defrencing it.


   ╭─
   | int x = 10;
   | int *p = NULL; //null pointer --> cannot be derefrenced
   | p = &x; // null pointer now holds address of int 'x' --> can be derefrenced
   ╰─

*/

/* 

USES OF NULL POINTERS

    > To initialize a pointer variable in cases where pointer variable has not assigned any valid address yet.
    > To check for legitimate address location before accessing any pointer variable.
    > By doing so, we can perform error handling while pointer with C.
    > Example of such error handling can be: dereference pointer variable only if it's not NULL.
    > To pass a null pointer to a function argument when we don't want to pass any valid memory address.

*/

/* 

MORE ON NULL POINTERS

    > NULL macro is defined as ((void *)0) in header files of most of the C compiler implementations.
    > NULL pointer vs Uninitialized pointer - An uninitialized pointer contains an undefined value.
    > A null pointer stores a defined value, which is the one decided by the environment to not be a valid memory address for any object.
    > NULL pointer vs Void pointer - NUll pointer is a value where as void pointer is a type.

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int a = 43;
    int *ptr;
    ptr = &a;
    // ptr = NULL;
    int c = 43;

    // printf("the address of a is %d\n", ptr);
    // printf("the address of a is %s\n", ptr);

    // printf("the value of a is %d\n", *ptr);

    if (ptr != NULL)
    {
        printf("the value of a is %d\n", *ptr);
    }
    else
    {
        printf("The pointer is a null pointer and cannot be derefrenced %s\n", ptr);
    }

    return 0;
}