/* #include & #define PREPROCESSORS IN C */

/* 

THE #include DIRECIVE

    > The #include directive causes the preprocessor to fetch the contents of someother file to be included in the present file.
    > This file in turn #include some other file(s) which may in turn do the same.
    > Most commonly the #include files have a ".h" extension, indicating that they are header files.

*/

/* 

TWO COMMON #include FORMATS

    > In C programming there are two common formats for #include:

         > #include <headerFile.h> // The angle brackets say to look in the standard system directories.
         > #include "myFile.h" // The quotation marks say to look in the current directory.

    > Disk drive full ath is allowed, but discouraged since it is not portable:

         > #include </home/hitesh/C_Tutorials_Notes/someFile.h> // Too specific
         > #include <someFile.h> // Relative and path to the standard locations.

*/

/* 

THE #define DIRECTIVE

    The #define directive is used to "define" preprocesor "variables".
    The #define preprocessor directive can be used to globally replace a word with a number.
    It acts as if an editor did a global search-and-replace edit of the file.

*/

/* 

USING #define FOR DEBUGGING

    #define directive can be used for debugging
    We can have printing statements that we only want active when debugging.
    We can "protect" them in a "ifdef" block as follows:

        #define DEBUG
        #ifdef DEBUG
            print statement
        #endif
        #undef DEBUG

*/

/* 

MACROS USING #define

    We can alse create macros using #define
    Macros operate much like functions, but because they are expanded in place and are generally faster.

        #define PI 3.14
        #define Square(x) x *x
        
        #include <stdio.h>

        int main()
        {
            int radius, area;
            printf("enter radius :");
            scanf("%d", &radius);
            area = PI * Square(radius);

            printf("area of circle of given radius is :%d\n", area );
        }

*/

/* 

WE'LL GO TO VS CODE AND SEE THESE PRE-PROCESSOR EXAMPLES

*/

#include <stdio.h>
#include "temp.c"
#define PI 3.14
#define SQUARE(r) r *r

int main()
{
    // float var = PI;
    // int *ptr = funcionDangling();

    // printf("hello it's me %f\n", var);
    // printf("sum is %d\n", *ptr);

    int radius, area;
    
    printf("enter radius :");
    scanf("%d", &radius);

    area = PI * SQUARE(radius);

    printf("area of circle of given radius is :%d\n", area);

    return 0;
}
