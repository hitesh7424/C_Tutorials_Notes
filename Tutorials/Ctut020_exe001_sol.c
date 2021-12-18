// exercise 1 solved

// Without loop
/*
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter the number you want the multiplication table of:\n\t");
    scanf("%d", &a);

    printf("\nTable of %d:\n\n", a);
    printf("\t%d x  1 = %d\n", a, a * 1);
    printf("\t%d x  2 = %d\n", a, a * 2);
    printf("\t%d x  3 = %d\n", a, a * 3);
    printf("\t%d x  4 = %d\n", a, a * 4);
    printf("\t%d x  5 = %d\n", a, a * 5);
    printf("\t%d x  6 = %d\n", a, a * 6);
    printf("\t%d x  7 = %d\n", a, a * 7);
    printf("\t%d x  8 = %d\n", a, a * 8);
    printf("\t%d x  9 = %d\n", a, a * 9);
    printf("\t%d x 10 = %d\n", a, a * 10);
    printf("\nThanks for using ;)\n");

    return 0;
}

*/

// With loop
/*

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter the number you want the multiplication table of:\n\t");
    scanf("%d", &a);

    printf("\nTable of %d:\n\n", a);

    for (int i = 1; i < 11; i++)
    {
        printf("\t%d x  %d = %d\n", a, i, a * i);
    }

    printf("\nThanks for using ;)\n");

    return 0;
}

*/