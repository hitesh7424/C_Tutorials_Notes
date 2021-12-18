/* STORAGE CLASS IN C */

/* 

WHAT IS ASTORAGE CLASS?

    > A storage class defines scope, default initial value & lifetime of a variable.
    
    > In previous lectures, we saw that Dynamic Memory Allocation is a way in which the size of a data structure can be changed during the runtime.
    > Memory assigned to a program in atypical architecture can be broken down into four assignments:
        1. Code
        2. Static/global variables
        3. Stack
        4. Heap

*/

/* 

WHAT IS ASTORAGE CLASS?

    > A storage class defines following attributes about a variable in C:
            1. Scope        2. Default initial value        3. Lifetime
    
    > Scope: where will be this available
    > Default Initial value: the value of variable not given by us
    > lifetime: life of that variable

*/

/* 

STORAGE CLASSES IN C

    > In C language, following storage classes are most oftenly used:
        1. Automatic Variables
        2. External Variables
        3. Static Variables
        4. Register Variables

*/

/* 

AUTOMATIC VARIABLES: AUTO STORAGE CLASS
    
    > They are same as local variables.
    > Scope: Local to the function body they are defined in
    > DefaultInitialValue: Garbage value (a random value)
    > Lifetime: Till the end of the function block they are defined in
    > A variable defined without any storage class specification is by default an automatic variable
    > "int a;" and "auto int a;" are same

*/

/* 

EXTERNAL VARIABLES: EXTERNAL STORAGE CLASS

    > They are same as global variable.
    > Scope: Global to the program they are defined in
    > DefaultInitialValue: 0
    > Lifetime: These variable declared outside any function. They are available throught the lifetime of the program.
    > A global can be changed in any function in the program.
    > "int a;" written outside any function will tell the compiler that harry is global variable.
    > It is recommended to minimise the use of unnecessary global variables in a program.


EXTERNAL VARIABLES: EXTERN VARIABLE

    > extern keyword is used to inform our C compiler that a given variable is declared somewhere else.
    > Using extern will not allocate space for the variable
    > Example:

            ___________________________                  ______________________________
           | #include <stdio.h>        |                |  #include <stdio.h>          |                                     
           |                           |                |  #include "hitesh.c"         |                                     
           | int main()                |                |                              |                                 
           | {                         |                |  extern int hitesh;          |
           |     int hitesh = 90;      |                |                              |
           |     printf("%d", hitesh); |                |  int main()                  |                                 
           |                           |                |  {                           |                     
           |     return 0;             |                |      printf("%d\n", hitesh); |
           | }                         |                |                              |                         
            ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾                 |      return 0;               |      
                                                        |  }                           |     
                                                         ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾     
                        
*/

/* 

STATIC VARIABLES: STATIC STORAGE CLASS

    Scope: Local to the block they are defined in
    DefaultInitialValue: 0
    Lifetime: They are available thoughout the lifetime of the program.
    A static variable remains under existence for use within the function for entire program run.
    "static int harry;" written inside any function willtell the compiler taht harry is a static variable.
    It is recommended to minimize the use of unnecessary static variables in a program.

*/

/* 

REGISTER VARIABLES: REGISTER STORAGE CLASS

    > Scope: Lecal to the function they are declared in
    > DefaultInitialValue: Garbage value
    > Lifetime: They are available till the end of the function block, in which the variable is defined.
    > Register variable requests the compiler to store the variable in the CPU register instead of storing in the memory to have faster access.
    > Generally this is done for the variables which are being used freqently

*/

#include <stdio.h>
#include "temp.c"

// int myVar;
// int myVar = 98;

int myFunc(int a, int b)
{
    // int myVar;
    // auto int myVar;
    // extern int myVar;
    // myVar = a + b;

    static int myVar;
    myVar++;
    printf("The myVar is %d\n", myVar);
    return myVar;
}

int main()
{
    // Declaration - Telling the compiler about the variable (No space reserved)
    // Definition  - Declaration + space reservation

    // int myVar = 345;
    // int myVar = 98;
    // int myVar = myFunc(4, 5);
    // myVar = myFunc(4, 5);
    // myVar = myFunc(4, 5);
    // myVar = myFunc(4, 5);
    // printf("The value of myVar is %d\n", myVar);

    register int myVar = myFunc(4, 5);
    printf("register %d\n", myVar);

    return 0;
}
