/* STATIC VARIABLE IN C */

/* 

LOCAL VARIABLE (RECAP)

    > Scope is a rigion of a program where defined variable can exist and beyond which it cannot be accessed.
    > Variable which sre accessed inside a function or a block are called local variables.
    > They can only be accessed by the function they are declared in!
    > They are inaccessible to the functions outside the function they are declared in!

*/

// #include <stdio.h>

// int func(int *a);

// int main()
// {
//     int a = 2; // This is local variable inside a function.
//     func(&a);

//     printf("%d\n", a);

//     return 0;
// }

/* 

GLOBAL VARIABLES (RECAP)

    These are the variables defined outside the main method.
    Global variables are accessible throughout the entire program from any function.
    If a local and global variable has the same name, the local variable will take preferance.

*/

// int b = 34; // This is global varible outside any function.

/* 

FORMAL ARGUMENTS

    > These variables are treated as local variables within a function.
    > These variables take precedence over global variables.

*/

// int func(int *a) // This (int *a) is formal argument, this can be taken by function as input
// {

//     return *a = b;
// }

/* 

STATIC VARIABLES IN C

    > Static variables are variables which gave a property of preserving their values even when they go out of scope.
    > They preserve their value from the previous scope and are not initialized again.
    > Static variable remains in memory throughout the span of program.
    > Static variables are initialized to 0 in not initialized explicitly.
    > In C, static variables can only be initialized using constant literals.

    > static data_type name = value;
*/

/* 

LETS CODE

    > We can use local, global and static variables as when required in our C programs.
    > Lets go to our IDE and write some code.

*/

#include <stdio.h>

int c = 123; // This is global varuable as it in declared outside main()

int ret()
{
    return 23*3;
}

int func1(int b)
{
    // static int myvar = 0;
    // static int myvar;
    // static int myvar = ret(); // myvar must be a constant
    static int myvar = 98;
    
    printf("The value of myvar is %d\n", myvar);
    myvar++;
    
    // printf("The value of c inside func1 is %d\n", c);
    // printf("Address of b inside main is %d\n", &b);
    // return b * 10;
    return b + myvar;
}

int main()
{
    int a = 12;
    // printf("Address of b inside main is %d\n", &a);
    // int val = func1(a);
    // int *ptr = &val;
    // printf("The value of func1 is %d\n", val);

    func1(a);
    func1(a);
    func1(a);

    return 0;
}