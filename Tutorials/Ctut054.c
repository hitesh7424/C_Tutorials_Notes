/* DANGLING POINTER IN C */

/* 

WHAT IS A DANGLING POINTER?

    > A pointer pointing to a freed memory location or the location whose content has been deleted is called a dangling pointer.
    > Dangling pointer arise during object destruction when an object that has incoming reference is deleted or deallocated, without modifing the value of pointer, so that the pointer still points to the memory location of the deallocated memory.

*/

/* 

CAUSES OF DANGLING POINTER

    1. Deallocation of memory
    2. Returning local variables in function calls
    3. Variable going out of scope

*/

/* 

1. DEALLOCATION OF MEMORY

    > when memory is deallocated, the pointer keeps pointing to the free space.
    > Example:

        char *str = "Hi Hitesh!";
        int a;
        int *ptr = (int *)malloc(sizeof(int));
        free(ptr);  // ptr now becomes a dangling pointer
        ptr = NULL; // ptr no longer dangling

*/

/* 

2. RETURNING LOCAL VARIABLES IN FUNCTION CALLS

    #include <stdio.h>

    int *myFunc()
    {
        // a is a local variable and goes out of scope on function return over.
        int a = 32;

        return &a;
    }

    int main()
    {
        int *ptr = myFunc(); // ptr points to invalid location. ==> dangling pointer
        printf("The value of *ptr is %d\n", *ptr);
        
        return 0;
    }


*/

/* 

3. VARIABLE GOING OUT OF SPACE

    #include <stdio.h>

    int main()
    {
        int *ptr;
        { // scope starts

            int i = 0;
            ptr = &i; // ptr points to invalid location

        } // scope ends

        // ptr is now dangling pointer
        printf("the value of i is %d\n", *ptr);

        return 0;
    }

*/

/* 

IS DANGLING POINTER A GOOD THING TO HAVE?

    > Dangling pointers can introduce nasty bugs in our C programs
    > Dangling pointer bugs frequently become security holes at a times
    > We can avoid issues caused by dangling pointers by initializing pointer to NULL
    > After de-allocating memory, pointer will no longer dangling.
    > Assingning NULL value means pointer s a null pointer now.

*/

/* 

LETS CODE

    We can avoid dangling pointers and handle them appropiately to write powerful C programs.
    Lets go to our IDE and write some code.

*/

#include <stdio.h>
#include <stdlib.h>

int *funcionDangling()
{
    int a, b, sum;
    a = 12;
    b = 34;
    sum = a + b;
    return &sum;
}

int main()
{
    // case 1: Deallocation of a memory block
    int *danglingPtr1 = (int *)malloc(7 * sizeof(int));
    danglingPtr1[0] = 23;
    danglingPtr1[1] = 45;
    danglingPtr1[2] = 43;
    danglingPtr1[3] = 12;
    free(danglingPtr1); // ptr is now dangling pointer

    // case 2: Function returning local variable address
    int *danglingPtr2 = funcionDangling();  // ptr is now dangling pointer

    // case 3: If a variable goes out of scope
    int *danglingPtr3;
    {
        int a = 13;
        danglingPtr3 = &a;
    }
    // Here variable goes out of scope which means danglingPtr3 is pointing to a location which is freed and hence danglingPtr3 is now a dangling pointer

    return 0;
}
