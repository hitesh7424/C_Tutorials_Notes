/* COMMAND LINE ARGUMENT IN C */

/*

WHAT ARE COMMAND LINE ARGUMENTS?

> Command line argument is an important concept in C programming.
> Sometimes we need to pass arguments from the command line to the program when it is invoked.
> Command line arguments are used to supply parameters to the program when it is invoked.
> It is mostly used when you need to control your program from the console.
> These arguments are passed to the main() method.

*/

/*

COMMAND LINE EXAMPLE

> FFmpeg is a free and open-sourse project consting of a vast software suite of libraries and
    programs for handling video, audio and other multimedia files and streams.
> Ffmpeg.exe is a command line utility written in C language.
> Other examples include git, brew, apt-get etc.

*/

/*


#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("argc is %d\n", argc);
    if (argc >= 2)
    {
        printf("The arguments supplied are:\n");
        for (int i = 0; i < argc; i++)
        {
            printf("%s\t", argv[i]);
        }
    }

    return 0;
}


*/

/*

#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("The value of argc is %d\n", argc);

    for (int i = 0; i < argc; i++)
    {
        printf("This argumnet at index number %d has value of %s \n", i, argv[i]);
    }

    return 0;
}

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int sum = 0;

    if (argc < 3)
    {
        printf("\n******** Give minimum 2 Arguments ***********\n\n");
    }
    else
    {

        printf("\nSum of ");

        for (int i = 1; i < argc; i++)
        {
            int a = atoi(argv[i]);
            if (i == argc - 1 && argc > 2)
            {
                printf("and %d ", a);
            }
            else
            {
                printf("%d ", a);
            }

            sum += a;
        }

        printf("is %d\n\n", sum);
    }

    return 0;
}
