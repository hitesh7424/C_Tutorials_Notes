/* OTHER DIRECTIVES AND PREDEFINED MACROS */

/* 

PREPROCESSOR DIRECTIVES

    > Preprocessor is a kind of automated editor that modifies a copy of the original source code
    > The #include directive causes the preprocessor to fetch the contents of some other file to be included in the present file.
    > In C programming there are two common farmats for #include
    > This file may in turn #include some other file(s) which may in turn do the same.
    > Most commonly the #included files has a ".h" extension, indicating that they are header files.
    > The #define directive is used to "define" preprocessor "variable"

*/

/* 

OTHER C PREPROCESSORS

    #define  --> used to define macros
    #include --> used to include file(s)
    #ifdef   --> if a macro is defined return true
    #ifndef  --> if the macro is not defined returns true
    #if      --> if a condition stisfy, the command inside if will be executed
    #else    --> if not satisfy the condition of if, the command inside else will be executed (if stated)
    #elif    --> if is for multiple condition
    #pragma  --> to issue some special commands to the compiler

*/

/* 

PREDEFINED MACROS IN C

    __DATE__  => The current date as character literal in "MMM DD YYYY" format.
    __TIME__  => This contains the current time as a charater literal in "HH:MM:SS" format.
    __FILE__  => The current filename as a string literal.
    __LINE__  => The current line number as a decimal constant.
    __STDC__  => Defined a 1(one) when the compiler complies with the ANSI standard.

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    printf("Date     :%s\n", __DATE__);
    printf("Time     :%s\n\n", __TIME__);
    printf("ANSI     :%d\n\n", __STDC__);
    printf("FileName :%s\n", __FILE__);
    printf("Line No. :%d\n", __LINE__);

    return 0;
}