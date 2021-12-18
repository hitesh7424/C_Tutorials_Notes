/* File I/O Functions In C */

/*

WORKING WITH FILES IN C

> When working with files, we ave to declare a pinter of type FILE

> This declaration helps us to work with files through C program.

*/

/*

OPENING A FILE - CREATING OR EDITING A FILE

> stdio.h contains a function called called fopen() for opening a files in C.

> The syntax for opening a file in standard I/O is:
     ptr = fopen("fileopen", "mode");

> For example:
    fopen("E:\\Code\harry.txt", "w");
    fopen("E:\\Programming\bhai.bin", "rb");

> modes:
    "r"    :read
    "w"    :write
    "a"    :append
    "r+"   :read & write
    "rb"   :read in binary
*/

/*

CLOSING A FILE

> Any file which is opened in a C program needs to be closed.

> Closing a file is accomplished by the library function fclose().

> fclose(fptr); //fptr is the file pointer associated with file to be closed.


*/

/*

READING A FILE

> In order to read a file, we can use fscanf function.

> This function is file version of scanf function

> fscanf expects a file pointer in addition to the other arguments which scanf expects

> We will have to open the file in read mode in order to use this function

syntax:
    fscanf(fileptr, "%s", string);

*/

/*

WRITING TO A FILE

> In order to write to a file, we can use fprintf function.

> This function is file version of printf function.

> fprintf expects a file pointer in addition to the other arguments which printf expects.

> We will have to open the file in write mode in order to use this function.

syntax:
    fprintf(fileptr, "%s", string);

*/

#include <stdio.h>

int main()
{
    FILE *ptr = NULL;

    /* ********* Reading a File ************* */
    // char string[34];
    // ptr = fopen("myfile.txt", "r");
    // fscanf(ptr, "%s", string);
    // printf("The content of the file is:\n%s\n\n", string);

    /* ********* Writing a File ************* */
    char string[64] = "This file is produces by Ctut064.c.";
    ptr = fopen("myfile2.txt", "w");
    fprintf(ptr, "%s", string);

    return 0;
}
