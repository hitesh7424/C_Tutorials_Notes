// Arrays

/*

What is array?

    > An array is a collection of data items of the same type.
    > Items are stored at contiguous memory locations.
    > It can also store the collection of derived data types, such as pointers, structures, etc.
    > A one-dimensional array is a list.
    > A two-dimensional array is like table.
    > The C language places no limits on the number of dimensions in an array.
    > Some text refer to one-dimensional array as vectors, two-dimensional arrays as matrices,
      and use the general term arrays when the number of dimensions is unspecified or unimportant. 

*/

/*

Why do we use arrays?

    > Code that use arrays is sometimes more organised and readable.
    > If you were to store the marks in a test of 56 students, creating 56 variables will make 
      program look cluttered and messy.
    > Solutions to this is arrays!
    > We can create arrays of integers and store the consecusive marks corresponding to the 
      roll number in athe array.

*/

/*

Advantages of arrays:

    > It is used to represent multiple data items of same types by using only single name.
    > Accessing an item in a given array is very fast.
    > 2 Dimensional arrays make it easy in mathematical applications as is used to represent a matrix.

*/

/*

Properties of arrays:

    > Data in array is stored in contiguous memory locations.
    > Each element of an array is of same size.
    > Any element of the array with given index can be accessed very quickly by
    using its address which can be calculated using the base address and the index.

*/

/*

Syntax for declaring and initializing an array:

    > Data_type[size];
    > Data_type name[size] = {x, y, z, .....}; //size not requires in this case!
    > data_type name[rows][columns]; // for 2-d arrays
    > We can also initialize the array one by one by accessing it using its index:
        > name[0] = 0;
    > Lets go to VS code and write some code.

*/

#include <stdio.h>

// int main()
// {
//     int marks[4];   // 1-d array
//     marks[0]= 43;
//     printf("marks of student 1 is %d\n", marks[0]);

//     for (int i = 0; i < 4; i++)
//     {
//         printf("Enter the value of %d element of the array\n", i);
//         printf("> ");
//         scanf("%d", &marks[i]);
//     }
//     printf("\n");
//     for (int i = 0; i < 4; i++)
//     {
//         printf("The marks of student %d is %d\n", i, marks[i]);
//     }

//     return 0;
// }

//
// int main()
// {
//     int marks[]={12121,3131,2313,231321};  // declaration and initialization

//     for (int i = 0; i < 4; i++)
//     {
//         printf("The marks of student %d is %d\n", i, marks[i]);
//     }

//     return 0;
// }

int main()
{
    int marks[][4]={{1234567,2,3,4},{5,6,7,8}}; // 2-d array

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t", marks[i][j]);
        }
        printf("\n");
        
    }
    


    return 0;
}
