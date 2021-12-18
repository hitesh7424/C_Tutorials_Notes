/* typedef IN C */

#include <stdio.h>

typedef struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[30];
} std;

int main()
{
    // typedef <previous_name> <alias_name>
    // typedef unsigned long ul;
    // ul l1, l2, l3;

    // typedef int integer;
    // integer a = 44;

    // printf("The value of a is %d\n", a);

    // std s1, s2;
    // s1.id = 23;
    // s2.id = 98;

    // printf("s1's id is %d\n", s1.id);
    // printf("s2's id is %d\n", s2.id);

    // int *a, b; // here only a is pointer.
    typedef int *intptr;
    intptr a, b; // here a and b both are pointers
    int c = 28;
    a = &c;
    b = &c;
    printf("address of c is %p\n", a);
    printf("address of c is %p\n", b);

    return 0;
}