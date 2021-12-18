// Pointer

/*

What is pointer?

    > Variable which stores the address of another variable.
    > CAn be of type int, char, array, function,or any other pointer.
    > Size depends on the architecture. Ex 2 bytes for 32 bit
    > Pointer in C programming language can be declared using * (asterisk symbol).

*/

/*

Intuative analogy - stacked boxes

                                p   0xC10A
                               .----------.  
 a   0x45A1         .----------|o  0x45A1 |                      
.----------.      .`           '----------'
|          |<----`
'----------'                                  

            @> a is an integer value
            @> p is a pointer to integer

*/

/*

'&' and '*' Operators

                                p   0xC10A
                               .----------.  
 a   0x45A1         .----------|o  0x45A1 |                      
.----------.      .`           '----------'
|          |<----`
'----------'                               

    > The address of operator '&' returns the address of a variable
    > * is the dereference operator (also called indirection operator) used
    to get value at a given address


*/

/*

NULL pointer

    > A pointer that is not assigned any value but NULL is known as the NULL pointer.
    > In computer programming a null pointer is a pointer that does not point to any 
      object or function.
    > We can use it to initialize a pointer variable when that pointer variable isn't
      assigned any memory address yet.
    > int* ptr = NULL;

*/

/*

Lets code

    > Pointers can beeasily created using the syntax discussed!
    > Lets go to our IDE and write some code

*/

#include <stdio.h>

/*

int main(int argc, char const *argv[])
{
    printf("Lets lear about pointers.\n");
    int a = 86;
    int *ptra = &a;

    printf("The value of a is %d\n", a);
    printf("The value of a is %d\n", *ptra);
    printf("\n");

    printf("The address of a is %p\n", &a);
    printf("The address of a is %p\n", ptra);
    printf("\n");

    printf("The value of ptra is %p\n", ptra);
    printf("The value of ptra is %p\n", &a);
    printf("\n");

    printf("The address of ptra is %p\n", &ptra);

    printf("\n\n");

    int *ptr1;
    int *ptr2 = NULL;

    printf("The garbage address stored by ptr1 is %x\n", ptr1);
    printf("The  address  stored   by  ptr2  is   %x\n", ptr2);

    return 0;
}

*/

/*

print format specifier reference

    %c      character
    %d      decimal (integer) number (base 10)
    %e      exponential floating point number
    %f      floating point number
    %i      integer (base 10)
    %o      octal number (base 8)
    %s      a string of characters
    %u      unsigned decimal (integer) number
    %x      number in hexadecimal (base 16)
    %%      print a percent sign
    \%      print a percent sign

*/

/*

Uses of pointer

    > Dynamic memory allocation
    > Arrays, Functions, and Structures
    > Return multiple types from a function
    > Pointer reduces the code and improve the performace

*/

