/* Passing arrays as a function argument */

/* 

WHY AND HOW TO PASS ARRAYS?

    > We pass arraya to a functio when we need to pass a list of values to a given function.
    > We can pass the arraya to a function : 
        1. By declaring array as parameter in the function.
        2. By declaring a pointer in the function to hold the base address of the array

*/

/* By declaring array as parameter in the function. */

// #include <stdio.h>

// int func1(int array[], int array_len)
// {
//     for (int i = 0; i < array_len; i++)
//     {
//         printf("The value at index %d is %d\n", i, array[i]);
//     }
//     array[0] = 9876; /* Very important point that if you change any value here, gets reflected in main() */
//     return 0;
// }

// int main()
// {
//     int arr[] = {21, 32, 12, 13, 43};
//     int length = sizeof(arr) / sizeof(arr[0]);
//     printf("The value at index 0 before func1 is %d\n\n", arr[0]);
//     func1(arr, length);
//     printf("\nThe value at index 0 after func1 is %d\n", arr[0]);

//     return 0;
// }

/* By declaring a pointer in the function to hold the base address of the array  */
/* Arrays are passed to funcions through base address */

// #include <stdio.h>

// void func2(int *ptr, int array_len)
// {
//     for (int i = 0; i < array_len; i++)
//     {
//         printf("The value at %d is %d\n", i, *(ptr+i));
//     }
//     *(ptr+1)= 234;
// }

// int main()
// {
//     int arr[] = {21, 32, 12, 13, 43};
//     int length = sizeof(arr) / sizeof(arr[0]);
//     printf("\nThe vale at index 0 before func2 is %d\n\n", arr[1]);
//     func2(arr, length);
//     printf("\nThe vale at index 0 after func2 is %d\n", arr[1]);

//     return 0;
// }

/* Multi dimensional array */

#include <stdio.h>

// void func3(int *ptr, int array_len)
// {
//     for (int i = 0; i < array_len; i++)
//     {
//         printf("The value at %d is %d\n", i, *(ptr + i));
//     }
// }

// int main()
// {
//     int arr[][2] = {{12, 23}, {13, 24}};
//     int length = sizeof(arr) / sizeof(arr[0][0]);
//     func3(&arr[0][0], length);

//     return 0;
// }

#include <stdio.h>

int func4(int array[][6], int rows, int columns)
{ /*                  ^ this is important */

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("The value at index (%d,%d) is %d\n", i, j, array[i][j]);
        }
    }
    return 0;
}

int main()
{
    int arr[][6] = {{2, 4, 3, 2, 4, 3}, {3, 5, 4, 3, 2, 2}};
    int row = sizeof(arr) / sizeof(arr[0]);
    int column = sizeof(arr) / sizeof(arr[0]) * row;
    // printf("rows is %d\n", row);
    // printf("column is %d\n", column);

    func4(arr, row, column);
    return 0;
}
