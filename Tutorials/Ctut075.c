// Memory Leak in C

/*

What is Memory Leak In C?

> Dynamic Memory Allocation is a way in which the size of data structure
 can be changes during the runtime.
> MEmory assigned to a program in a typical architecture can be broken
 down into four segments:
    1. Code
    2. Static/Global variables
    3. Stack
    4. Heap

*/

/*

What Causes Memory Leak In C?

> With great power comes great responsibility
> MEmory leak caused when we don't use dynamic memory properly
> When we keep on allocating memory in the heap without freeing, overall
 memory usage keeps on increasing.
> This situation is the cause of memory leak i.e. the programmer creates a
 memory block in the memory and forgets to delete it.
> To avoid these memory leak situations, memory allocated on heap should
 always be freed when not needed.

*/

// code

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i = 0;
    int *i2;

    // // this code is not safe due to memory leaking due to not freeing the unwanted allocated memory
    // while (i < 44555)
    // {
    //     printf("Check the Task Manager\n");
    //     printf("Memory is Leaking\n");
    //     i2 = malloc(1000 * 1000 * sizeof(int));
    //     if (i % 1000 == 0)
    //     {
    //         getchar();
    //     }

    //     i++;
    // }

    while (i < 44555)
    {
        printf("Check the Task Manager\n");
        printf("Memory is not Leaking\n");
        i2 = malloc(1000 * 1000 * sizeof(int));
        if (i % 1000 == 0)
        {
            getchar();
        }
        free(i2); // Freeing unwanted allocated memory to avoid memory leak

        i++;
    }

    return 0;
}
