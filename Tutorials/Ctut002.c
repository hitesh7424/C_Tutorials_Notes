#include <stdio.h> // Pre-processing Command

int main() // this is function
{
    float a, b;                   // here a and b are defined as integer
    printf("Enter number a => "); // printf is for print
    scanf("%f", &a);              // scanf(a function of stdio.h) for taking user value

    printf("Enter number b => ");
    scanf("%f", &b);

    printf("The sum is => %f\n", a + b);

    return 0; // To return All Is Well
}

// to compile           => gcc filename.c
// to custom filename   => gcc -o custumfilename
// to run               => .\filename