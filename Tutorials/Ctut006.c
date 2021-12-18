#include <stdio.h>

// Variable and Data-Types

// // Flow of C program:
//      Preprocessing => Compilation => Assembly => Linking => Loading

// // What is a Variable?
// > A name given to a memory location
// > Declared by typing type variable_name;
// > Initialized and declared by type variable_name=value;

// int main()
// {
//     int a;          // a is variable
//     int a = 4;      // here value of a is 4
//
//     return 0;
// }

// // Rules for defining a Variable in C
// > Can contain alphabets, digits, underscore(_)
// > A variable name can start with an alphabet and undescore only.
// > Can't start with a digit
// > No whitespace & reserved keywords is allowed
// > Valid Variable names: int hitesh, float hitesh123, char _hitesh34
// > Invalid Variable names: $hitesh, int 77hitesh, char long;

// int main()
// {
//     // Valid variables
//     int hitesh;
//     float hitesh123;
//     char _hitesh34;
//
//     // Invalid variables
//     $hitesh;
//     int 77hitesh;
//     char long;
//
//     return 0;
// }

// // Data Types in C
// > Basic Data Types: int, char, float, double
// > Derives Data Types: array, pointer, strcture, union
// > Enumerration Data Types: enum
// > Void Data Types: void

// // Data Types Size:

// int main(int argc, char const *argv[])
// {
//     // "lu" used for unsigned long

//     printf("size of char \t\t\t%lu\n", sizeof(char));
//     printf("size of signed char \t\t%lu\n", sizeof(signed char));
//     printf("size of unsigned char \t\t%lu\n", sizeof(unsigned char));

//     printf("\nsize of short \t\t\t%lu\n", sizeof(short));
//     printf("size of signed short \t\t%lu\n", sizeof(signed short));
//     printf("size of unsigned short \t\t%lu\n", sizeof(unsigned short));

//     printf("\nsize of int \t\t\t%lu\n", sizeof(int));
//     printf("size of signed int \t\t%lu\n", sizeof(signed int));
//     printf("size of unsigned int \t\t%lu\n", sizeof(unsigned int));

//     printf("\nsize of short int \t\t%lu\n", sizeof(short int));
//     printf("size of signed short int \t%lu\n", sizeof(signed short int));
//     printf("size of unsigned short int \t%lu\n", sizeof(unsigned short int));

//     printf("\nsize of long int \t\t%lu\n", sizeof(long int));
//     printf("size of signed long int \t%lu\n", sizeof(signed long int));
//     printf("size of unsigned long int \t%lu\n", sizeof(unsigned long int));

//     printf("\nsize of float \t\t\t%lu\n", sizeof(float));

//     printf("\nsize of double \t\t\t%lu\n", sizeof(double));
//     printf("size of long double \t\t%lu\n", sizeof(long double));

//     return 0;
// }

// //OUTPUT =>

// size of char                    1
// size of signed char             1
// size of unsigned char           1

// size of short                   2
// size of signed short            2
// size of unsigned short          2

// size of int                     4
// size of signed int              4
// size of unsigned int            4

// size of short int               2
// size of signed short int        2
// size of unsigned short int      2

// size of long int                8
// size of signed long int         8
// size of unsigned long int       8

// size of float                   4

// size of double                  8
// size of long double             16

// Basic Operators and Functions:
// > +, -, *, /

int main(int argc, char const *argv[])
{
    printf("%d\n", 3 + 7 - 2 * 9 / 8);

    int a, b;

    printf("no. 1st\n");
    scanf("%d", &a);

    printf("no. 2nd\n");
    scanf("%d", &b);

    printf("the sum is        %d\n", a + b);
    printf("the difference is %d\n", a - b);
    printf("the product is    %d\n", a * b);
    printf("the quotient is   %d\n", a / b);

    return 0;
}
