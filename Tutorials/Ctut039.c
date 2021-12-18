/* Unions in C */

/*
WHAT IS A UNION?

    > Union is a user defined data type (very similar to structure)
    > The difference between structures and unions lies in the fact that in structure, each member has its own storage location, whereas members of a union uses a single shared memory.
    > This single shared memory location is equal to the size of its largest data member.

*/

/* 

DECLARATING AND ACCESSING UNION MEMBERS

    > like structures, we access any member by using the member access operator (.) in unions.
    > We use keyword union to define a union.
    > Syntax is very similar to that of structure.

*/

/* 

UNIONS CANNOT HANDLE ALL MEMBERS AT ONNCE

>Structures=>
    struct student
    {
        float marks; //4 bytes
        int id; //4 bytes
    }sl;

    sl ---> 8 bytes of data

>Unions=>
    union student
    {
        float marks; //4 bytes
        int id; //4 bytes
    }sl;

    sl ---> 4 bytes of data 
            shared between id 
            and marks

*/
/* 

SYNTAX FOR UNOINS IS VERY SIMILAR TO STRUCTURES

union test
{
    int a;
    float b;
    char c;
}un;

un.a; // for accessing members of union un
un.b;
un.c;

*/

/* 

LETS CODE!

    > We can use unions to introduce better memory management in our C programs.
    > Lets code to our IDE and write some code.

*/

#include <stdio.h>
#include <string.h>

// struct Student
// {
//     int id;
//     int marks;
//     char fav_char;
//     char name[34];
// };

union Student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};

int main()
{
    // struct Student s1;
    union Student s1;

    s1.id = 1;
    s1.marks = 45;
    s1.fav_char = 'u';
    strcpy(s1.name, "Hitesh");

    printf("The id        : %d\n", s1.id);
    printf("The marks     : %d\n", s1.marks);
    printf("The fav_char  : %c\n", s1.fav_char);
    printf("The name      : %s\n", s1.name);

    return 0;
}