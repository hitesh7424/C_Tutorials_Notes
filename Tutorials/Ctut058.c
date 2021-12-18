/* PREPROCESSOR IN C */

/* 

QUICK RECAP 

    > Compiler converts textual form of C program into an executable.
    > There are four phases for a C program to become an executable:

            PreProcessing >>>  Compilation >>>  Assembly >>>  Linking
        
        1. PreProcessing:
              > Removal of comments
              > Expansions of macros
              > Expansions of include files
        
        2. Compilation:
              > Assembly Level Instructions (ALI) are generated
        
        3. Assembly:
              > .o & .exe files are made
              > Functions like printf are not resolved yet.
              > ALI are converted to machine code.
        
        4. Linking:
              > Links the function implemetations

*/

/* 

WHAT IS A C PROGRAM?

    > C preprocessor comes under action before the actual compilation process
    > C preprocessor is not a part of c compiler
    > It is a text substution tool
    > All preprocessor commands begin with a hash symbol (#) like "#include <stdio.h>", etc.
    
*/

/* 

PREPROCESSOR COMMANDS EXAMPLES

    #define     (macros)
    #include    (include header file)
    #undef      (Undefine macros)
    #ifdef      (if defined return true)
    #ifndef     (if not define return true)
    #if         (if any compile time condition is true)
    #else       
    #elif

*/

/* 

WE'LL GO TO VS CODE AND SEE SOME PRE-PROCESSOR EXAMPLES

    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>

    int sum()
    {
        int a, b, sum;
        a = 34;
        b = 356;
        sum = a + b;

        return sum;
    }

    int main()
    {
        // code
        printf("the sum is %d\n", sum());

        return 0;
    }
     
*/

