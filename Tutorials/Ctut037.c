/* STRUCTURES IN C */

/* 

What is a structure in C

    > Structures are user defined data types in C
    > Using structures allow us to combine data of different types together.
    > It is used to create complex data type which contains diverse information.
    > They are very simillar to arrays but structure can store data of any type, which is practically more useful.

*/

/* 

EXAMPLE: STORING EMPLOY INFORMATION

    > Structures are user defined data type.
    > Suppose we want to store information of 10,000 employees working at Abc Pvt. Ltd.
        > Name
        > Addess
        > Email
        > Employee id
    > Clearly we need some user defined data type which contains only this information.

*/

/* 

DEFINING A STRUCTURE

struct [structure_name]
{
    // data_type var 1
    // data_type var 2
    // data_type var 3 ...    
}
[Structure_variables];

*/

/* 
students =>
1. id
2. marks
3. fav_char

struct student
{
    int id;
    int marks;
    char fav_char;
} s1, s2, s3;

*/

/* 
DECLARING A STRUCTURE 

    We can either declare a structure along with structure definition or separately:


#include <stdio.h>

struct Employee
{
    int id;
    char name[53];
    float marks;
};
struct Employee e1, e2;

int main()
{
    struct Employee tt;
    return 0;
}

----------OR------------------

#include <stdio.h>

struct Employee
{
    int id;
    char name[53];
    float marks;
} e1, e2;

int main()
{
    struct Employee tt;
    return 0;
}
*/

/* 

INITIALIZING A STRUCTURE

We can initialize a structure either along with structure defintion or separately:

include <stdio.h>

struct Employee
{
    int id;
    float marks;
};

int main()
{
    struct Employee e1;
    e1.id = 12;
    e1.marks = 43.23
    return 0;
}

-------OR--------------------------

int main()
{
    struct Employee e1 = {24, 65.2};

    return 0;
}

*/

/* 

ACCESING STRUCTURE MEMBERS

    > Array elements are accessed using the subscript variable.
    > In a similar fashion, structure members are accessed using dot [.] operator.
    > (.) is called as "structure member operator".
    > To access the member of the structure, we use this operator in between "Structure name" & "member name"

*/

#include <stdio.h>
#include <string.h>

struct Student harry, hitesh, ravi, shubham;

struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[30];
};

void accessdata()
{
    int data;
    char nicname[10];
    int id;
    int marks;
    char fav_char;
    char name[30];

    printf("Choose the name of student\n");
    printf("1. harry\n");
    printf("2. hitesh\n");
    printf("3. ravi\n");
    printf("4. shubham\n");
    printf("\ninput> ");
    scanf("%d", &data);

    switch (data)
    {
    case 1:
        strcpy(nicname, "harry");
        strcpy(name, harry.name);
        marks = harry.marks;
        id = harry.id;
        fav_char = harry.fav_char;
        break;

    case 2:
        strcpy(nicname, "hitesh");
        strcpy(name, hitesh.name);
        marks = hitesh.marks;
        id = hitesh.id;
        fav_char = hitesh.fav_char;
        break;

    case 3:
        strcpy(nicname, "ravi");
        strcpy(name, ravi.name);
        marks = ravi.marks;
        id = ravi.id;
        fav_char = ravi.fav_char;
        break;

    case 4:
        strcpy(nicname, "shubham");
        strcpy(name, shubham.name);
        marks = shubham.marks;
        id = shubham.id;
        fav_char = shubham.fav_char;
        break;

    default:
        printf("Invalid Choice!\n");
        break;
    }
    printf("\n");
    printf("Detail of %s ->\n\n", nicname);
    printf("name    : %s\n", name);
    printf("ID      : %d\n", id);
    printf("marks   : %d\n", marks);
    printf("fav_char: %c\n", fav_char);
}

int main()
{

    harry.id = 1;
    hitesh.id = 2;
    ravi.id = 3;
    shubham.id = 4;

    harry.marks = 468;
    hitesh.marks = 468;
    ravi.marks = 468;
    shubham.marks = 468;

    harry.fav_char = 'p';
    hitesh.fav_char = 'p';
    ravi.fav_char = 'p';
    shubham.fav_char = 'p';

    strcpy(harry.name, "Harish Deshpandey");
    strcpy(hitesh.name, "Hitesh Kumar");
    strcpy(ravi.name, "Ravi Shrivastav");
    strcpy(shubham.name, "Shubham Kumar");

    printf("harry marks is %d\n", harry.marks);

    accessdata();
    return 0;
}