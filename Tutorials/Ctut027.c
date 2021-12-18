// Arrays and pointer arithematic in C

/*

Pointer arithmetic

    > There are four arithmetic operators that can be used on pointers:
        > ++
        > --
        > +
        > -
    > Lets go to VS Code to write som code & learn more!

*/

// Code

// #include <stdio.h>

// int main()
// {
//     int a = 34;
//     int *ptra = &a;
//     printf("%d\n", ptra);
//     printf("%d\n", ptra + 1); // In ptra+1, +1 adds 4(size of int) in ptra

//     printf("\n");

//     char b = 'a';
//     char *ptrb = &b;
//     printf("%d\n", ptra);
//     printf("%d\n", ptra + 2);

//     return 0;
// }

/*

Arrays and pointers

    > Contider the following declaration: int arr[10];
    > What is type of arr?
        @> integer array 
    > However, arr, by itself, without any index subscripting, can be 
      assigned to an integer pointer.
    > What type does arr[i] have?
        @> int

*/

/*

arr[i] Using pointer arithmetic

    > arr[i] == *(arr +i)
    > If arr is pointer to arr[0] then arr + is a pointer to arr[i].

*/

/*

Arrays in memory

int arr[i];

            __|__   |____________|  
              |     |______1_____|     1000  <------- arr  
    arr[0]    |     |______2_____|
              |     |______3_____|
            __|__   |______4_____|  
              |     |____________|     1004  <------- arr + 1
    arr[1]    |     |____________|
              |     |____________|
            __|__   |____________|  
              |     |____________|     1008  <------- arr + 2
    arr[2]    |     |____________|
              |     |____________|
            __|__   |____________|  
              |     |            |     




On a different architecture (warning)

            __|__   |____________|  
    arr[0]    |     |______1_____|     1000  <------- arr  
            __|__   |______2_____|  
    arr[1]    |     |____________|     1002  <------- arr + 1
            __|__   |____________|  
    arr[2]    |     |____________|     1004  <------- arr + 2 
            __|__   |____________|  
    arr[3]    |     |____________|     1006  <------- arr + 3
            __|__   |____________|  
    arr[4]    |     |____________|     1008  <------- arr + 4 
            __|__   |____________|  
    arr[5]    |     |____________|     1010  <------- arr + 5
            __|__   |____________|  
              |     |            |


*/

/*

Lets code!

    > pointer arithmetic can be used to write powerful C programs.
    > Lets go to our IDE and write some code

*/

#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int *arrayptr = arr;
    printf("Value at position 3 in the array is %d\n", arr[3]);
    printf("The Address of first element of the array is %ld\n", &arr[0]);
    printf("The Address of first element of the array is %ld\n", arr);
    printf("The Address of Second element of the array is %ld\n", &arr[1]);
    printf("The Address of Second element of the array is %ld\n", arr + 1);
    printf("The Address of third element of the array is %ld\n", &arr[2]);
    printf("The Address of third element of the array is %ld\n", arr + 2);

    // arr++;  // this line will throw an error
    arrayptr++;

    printf("\n");
    printf("The value at address of first element of the array is %d\n", *(&arr[0]));
    printf("The value at address of first element of the array is %d\n", arr[0]);
    printf("The value at address of first element of the array is %d\n", *(arr));
    printf("The value at address of Second element of the array is %d\n", *(&arr[1]));
    printf("The value at address of Second element of the array is %d\n", arr[1]);
    printf("The value at address of Second element of the array is %d\n", *(arr + 1));

    return 0;
}

