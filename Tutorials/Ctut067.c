/* MORE ON I/O IN C */

/*

WORKING WITH FILES IN C

> stdio.h contains a function called fopen() for opening files in C.
> When working with files, we have to declare a pointer of type FILE.
> This declaration helps us to work with files through C program.
> The syntax for opening a file in standard I/O is:
    > ptr = fopen("filename", "mode");

> In order ti read/write to a file, we can use fscanf/fprintf function.
    > fscanf(fp, "%s", buff); fprintf(fptr, "Marks= %d", marks);

> fclose(fptr); //fptr is the file pointer associated with file to be closed.


*/

/*

MODE & DESCRIPTION

 ____________________________________________________________________________________
|   MODE |  DESCRIPTION                                                              |
|>-------+--------------------------------------------------------------------------<|
|   "r"  |  Opens an existing text file for reading                                  |
|>----------------------------------------------------------------------------------<|
|   "w"  |  Opens a file for writing. If it doesn't exist, then a new file is        |
|        |  created. Writing starts from begining of the file.                       |
|>----------------------------------------------------------------------------------<|
|   "a"  |  Opens a text file for writing in appending mode. If it does not          |
|        |  exist then new file is created. The program will start appending         |
|        |  content to the existing file content.                                    |
|>----------------------------------------------------------------------------------<|
|   "r+" |  This mode will open a text file for both reading and writing             |
|>----------------------------------------------------------------------------------<|
|   "w+" |  Opens a text file for both reading and writing. It truncates             |
|        |  the file to zero length if it exists, otherwise creates a file if it     |
|        |  does not exist.                                                          |
|>----------------------------------------------------------------------------------<|
|   "a+" |  Opens a text file for both reading and writing. It creates the file      |
|        |  if it does not exist. The reading will start from the begining but       |
|        |  writing can only append to a file.                                       |
'------------------------------------------------------------------------------------'

*/

/*

OTHER FILE I/O FUNCTIONS IN C

    > There are various functions provided by C standard library to read and write a file,
      character by character, or in the form of a fixed length string

    > Some of them are:
        > fputc
        > fputs
        > fgetc
        > fputs

*/

/*

FPUTC IN  FUNCTION IN C

> Simplest function to write characters to a file is fputc
> Syntax of fputc goes as follows:
    > int fputc(character, FILE pointer);
    > It returns the written character written on success.
    > On failure it returns EOF
    > The EOF is a constant defined in the header file stdio.h.

*/

/*

FPUTS IN C

> fputs function is used to write a null terminated string to a file in C.
    > int fputs(const char *s, FILE *fp);

*/

/*

FGETC FUNCTION IN C

> Simplest function to read characters from is fgetc
> Syntax of fgetc goes as follows:
    > int fgetc( FILE *fp);
    > It returns the read character on success.
    > On failure it returns EOF
    > The EOF is a constant defined in the header file stdio.h.

*/

/*

FGETS IN C

> fgets function is used to read a null terminated string to a file in c
     > int fgets( const char *s, int n, FILE *fp);

*/

#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    // ptr = fopen("myfile.txt", "r");
    // char c = fgetc(ptr);
    // printf("The character i read was %c\n", c);
    // c = fgetc(ptr);
    // printf("The character i read was %c\n", c);

    // char str[34];
    // fgets(str, 5, ptr);
    // printf("The string is %s\n", str);

    // ptr = fopen("myfile.txt", "w");
    ptr = fopen("myfile.txt", "r+");
    // ptr = fopen("myfile.txt", "w+");
    // ptr = fopen("myfile.txt", "a+");

    fputc('o', ptr);
    fputs("This is bike", ptr);

    char str[34];
    fgets(str, 5, ptr);
    printf("The string is %s\n", str);

    fclose(ptr);

    return 0;
}
