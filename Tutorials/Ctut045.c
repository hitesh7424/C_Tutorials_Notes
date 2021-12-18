/* DYNAMIC MEMORY ALLOCATION IN C */

/* 

WHAT AND WHY DYNAMIC MEMORY ALLOCATION?

    > An statically allocated variable or array has a fixed size in memory.
    > We have learnt to create big enough arrays to fit our inputs but this dosen't seem like an optimal way to allocate memory.
    > Memory is a very useful resource.
    > Clearly we need a way to request memory on runtime.
    > Dynamic Memory Allocation is a way in which the size of a data structure can be changed during the runtime.

*/

/* 

STATIC VS DYNAMIC MEMORY ALLOCATION
______________________________________________________________________
| Static memory allocation          | Dynamic Memory allocation       |
|-----------------------------------|---------------------------------|
| 1. Allocation is done before the  | 1. Allocation is done during the| 
|   programs execution              |   program's execution           |
|-----------------------------------|---------------------------------| 
| 2. There is no memory reusability | 2. There is memory reusability  |
| and the memory allocation cannot  |   and the memory allocation can |
| be freed.                         |   be freed when not required.   |
|-----------------------------------|---------------------------------| 
| 3. Less efficient                 | 3. More efficient               |    
‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾

*/

/* 

MEMORY ALLOCATION IN C PROGRMS

    Memory assigned to a program in a typical arcitechture can be broken down into four segments:
        1. Code ──> Text segment

        2. Static/global variables ─┬─> 1. data segment (initialized storage)
                                    ╰─> 2. bss segment (initialized storage)

        3. Stack ──> increases as program runs

        4. Heap ──> increases when we use dynamic memory allocation

*/

/* 

C PROGRAM: MEMORY LAYOUT

    Heap
    Stack   ───> It stores all variables of the function
    Global & Static Variables ────> It stores all global & static variables ─┬─> data
    Code ────> Text segment                                                  ╰─> bss

    Initially some memory will be reserved for main() in the
    stack. This is also called as the stack frame of main().

*/

/* 

C PROGRAM: STACK OVERFLOW

    > Compilers allocates some spaces for the stack part of the memory.
    > When this space gets exhausted for some bad reason, the situation is called as stack overflow.
    > Typical example includes recursion with wrong/no base condition.

*/

/* 

C PROGRAM: USE OF HEAP

    > There are a lot of limitations of stack (static memory allocation)
    > Some of the examples includes variable sized array, freeing memory no longer required etc.
    > Heap can be used flexibly by the programmer as per his needs.

    cons > if we make mistake in program, the size of heap will grow and grow.

    > We can create a pointer in our main function and point to a memory block in the heap.
    > The address is stored by the local variable in the main function.
    > The memory consumed will not get freed automatically in case we overwrite the pointer.

*/

/* 

LETS CODE!

    We can use dynamic memory allocation to allocate memory during runtime.
    Lets go to our IDE and wrie some code.

*/

#include <stdio.h>
#include <string.h>

int a = 45;

int main()
{
    char a[20];
    fgets(a,20, stdin);
    int b = 34;
    printf("%d %d\n", a, b);

    return 0;
}

/* 

SIZE COMMAND

$ gcc Ctut045.c ; size ./a.out

   text    data     bss     dec     hex filename
   1522     588       4    2114     842 ./a.out

*/

