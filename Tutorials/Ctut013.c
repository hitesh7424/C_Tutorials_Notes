// Do while loop

/*

do while loop excutes at least once.

*/

/*

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, index = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    do
    {
        printf("\t%d\n", index + 1);
        index = index + 1;
    } while (index < num);

    return 0;
}

*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, index = 1;
    printf("Enter the number you want the multiplication table of: ");
    scanf("%d", &num);

    printf("\nTable of %d:\n\n", num);

    do
    {
        printf("\t%d x  %d = %d\n", num, index, num * index);
        index = index + 1;
    } while (index < 11);

    printf("\nThanks for using ;)\n");

    return 0;
}