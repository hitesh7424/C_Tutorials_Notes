/* FUNCTIONS FOR DYNAMIC MEMORY ALLOCATION */

/* 

DYNAMIC MEMORY ALLOCATION: RECAP

    > An statically allocated variable or array has fixed size in memory.
    > Dynamic Memory Allocation is a way in which the size of a data structure can be changed during the runtime.
    > Memory assigned to a program in a typical architecture can be broken down into four segments:
        1. Code
        2. Static/global variables
        3. Stack
        4. Heap

*/

/* It reserves a block of mIt reserves a block of m

FUNCTIONS FOR DYNAMIC MEMORY ALLOCATION IN C

    > In Dynamic memory allocation, the memory is locaed at runtime from the heap segment
    > We have four functions that help us achieve this task:
        > malloc
        > calloc
        > realloc
        > free

*/

/* 

C MALLOC()

    > malloc() stands for memory allocation
    > It reserves a block of memory with the given amount of bytes.
    > The return value is a void pointer to the allocated space
    > Therefore the void pointer needs to be casted to the appropriate type as per the requirements
    > However, if the space is insufficient, allocation of memory fails and returns a NULL pointer.
    > All the values at allocated memory are initialized to garbage values
        
    > syntax:
        ptr = (ptr-type*) malloc(size_in_bytes);

*/

/* 

C CALLOC()

    > calloc() stands for contiguous allocation
    > It reserves n blocks of memory with the given amount of bytes.
    > The return value is a void pointer to the allocated space
    > Therefore the void pointer needs to be casted to the appropriate type as per requirements
    > However, if the space is insufficient, allocation of memory fails and it returns a NULL pointer.
    > All the values at allocated memory are initialized to 0

    > Synatx:
        ptr = (ptr-type*) calloc(n, size_in_bytes);

*/

/* 

C REALLOC()

    realloc() stands for reallocation
    If the dynamically allocated memory is insufficient we can change the size of previously allocated memory using realloc() function

    Syntax:
        ptr = (ptr-type*) realloc(ptr, new_size_in_bytes);

*/

/* 

C FREE()

    > free() is used to free the allocated memory
    > If the dynamically allocated memory is not required anymore, we can free it using free function.
    > This will free the memory being used by the program in the heap

    > Syntax:
        free(ptr);

*/

/* 

LETS CODE!

    We can use dynamic memory allocation to allocate memory during runtime.
    Lets go to our IDE and write some code.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // // Use of malloc
    // int *ptr;
    // int n;
    // printf("Enter the size of array you want to create\n");
    // scanf("%d", &n);

    // ptr = (int *)malloc(n * sizeof(int));

    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter the value of %d element of array number: ", i);
    //     scanf("%d", &ptr[i]);
    // }

    // printf("\n");
    // for (int i = 0; i < n; i++)
    // {
    //     printf("The value at %d of the array is %d\n", i, ptr[i]);
    // }


    // Use of calloc
    int *ptr;
    int n;
    printf("Enter the size of array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d element of array number: ", i);
        scanf("%d", &ptr[i]);
    }

    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of the array is %d\n", i, ptr[i]);
    }


    // Use of realloc
    
    printf("Enter the size of new array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)realloc(ptr, sizeof(int));
    
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d element of new array number: ", i);
        scanf("%d", &ptr[i]);
    }

    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of new array is %d\n", i, ptr[i]);
    }

    free(ptr);

    return 0;
}