#include <stdio.h>

// Format Specifiers, Constants, & Escape sequence in C

/*
    What is Format Specifiers?
    > Format specifiers is a way to tell the compiler what type of data
        is in a variable during taking input displaying output to the user.
    
    > printf("This is a good boy %a.bf", var); will print var with b decimal 
        points in a 'a' character pace.
    
    > Lets to our IDE and leard more about the format specifiers.
*/

// int main()
// {
//     int a = 8;
//     float b = 3.14159;
//     printf("Hello, C language.\n\n");

//     printf("The value of a is %d and value of b is %f\n\n", a, b);

//     printf("Value of b is %10.20d\n\n", a);

//     printf("The value of b is %20.10f\n", b);
//     // this will print to 10 decimal points with 20 space taken

//     return 0;
// }

/*
    Some Format Specifiers ->

    %c  ->  Character
    %d  ->  Integer
    %f  ->  Float
    %l  ->  long
    %lf ->  double
    %Lf ->  long double

*/

/*
    Constant in C ->
    > A constant is a value or variable that can't be changed in the program,
        for example: l5, 23, 'a', 3.4, "Hitesh" etc.

    > Ther are two ways to define constant in C programming.
        > const kyword
        > #define preprocessor
    
    >Lets see both of them in the IDE
    
*/

// #define PI 3.14

// int main()
// {
//     int a = 8;
//     const float b = 3.14;
//     // b = 3; // connot do this since b is a constant.

//     printf("PI is %f", PI);
//     // PI = 3.2 // cannot do this since PI is a constant defined in preprocessor

//    return 0;
// }

/*
    Escape sequence in C ->
    > An escape sequence in C programming language in a sequence of characters.

    > It doesn't represent itself when used inside string literal or character.

    >It is composed of two or more characters starting with backslash \.
      For example: \n represents new line.

*/

/*

    Escape Sequence List In C -->
    
    .-----------------.----------------------.
    | Escape Sequence |    Meaning           |
    |-----------------|----------------------|
    |       \a        |  Alarm or beep       |
    |       \b        |  Backspace           |
    |       \f        |  Form Feed           |
    |       \n        |  New Line            |
    |       \r        |  Carriage Return     |
    |       \t        |  Tab (Horizontal)    |
    |       \v        |  Vertical Tab        |
    |       \\        |  Backslash           |
    |       \'        |  Single Quote        |
    |       \"        |  Double Quote        |
    |       \?        |  Question Mark       |
    |       \nnn      |  Octal number        |
    |       \xhh      |  Hexadecimal number  |
    |       \0        |  Null                |
    '-----------------'----------------------'

*/

// int main(int argc, char const *argv[])
// {
//     printf("hello \a world\n");
//     printf("hello \b world\n");
//     printf("hello \f world\n");
//     printf("hello \n world\n");
//     printf("hello \r world\n");
//     printf("hello \t world\n");
//     printf("hello \v world\n");
//     printf("hello \\ world\n");
//     printf("hello \' world\n");
//     printf("hello \" world\n");
//     printf("hello \? world\n");
//     printf("hello \0 world\n");
//     printf("hello world\n");

//     return 0;
// }

/*      Comments in C ->      */

// This is Single line comment.

/*
This is multi line Comment.
*/