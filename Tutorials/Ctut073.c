// CallBack Functions Using Function Pointers in C

/*

Function Pointers

> We can have pointers pointing to functions as well
> Function pointers point to code and not data
> Function pointers are useful to implement sallback functions
> Unlike normal pointers, we do not allocate de-allocate memory using function pointers.

*/

/*
CallBack Functions

> Function pointers are used to pass a function to a function
> This passed function can then be called again (hence the name callback funcion).
> This provides programmer to write less code to do more stuff.

*/

/*
+----------+
|   Heap   |
+----------+
|  Stack   |
+----------+
| Global & |
|  Static  |
| Variable |
+----------+
|   Code   |
+----------+
*/

// Code

#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b)
{
    return a + b;
}

void greetNamaskaramAndExecute(int (*fptr)(int, int))
{
    printf("Namaskaram  Upabhokta\n");
    printf("The sum of 5 and 7 is %d\n", fptr(5, 7));
}

void greetShubhPrabhaatAndExecute(int (*fptr)(int, int))
{
    printf("Shubh Prabhaat Upabhokta\n");
    printf("The sum of 9 and 2 is %d\n", fptr(9, 2));
}

// Task

float average(int a, int b)
{
    return (float)(a + b) / 2;
}
void greetSubhAprahanAndExecute(int a, int b, float (*fptr)(int, int))
{
    printf("Subh Aprahan Upabhokta\n");
    printf("The sum of %d and %d is %f\n", a, b, fptr(a, b));
}

void greetSusandhyaAndExecute(int a, int b, float (*fptr)(int, int))
{
    printf("Susandhya Upabhokta\n");
    printf("The sum of %d and %d is %f\n", a, b, fptr(a, b));
}

int main()
{
    // int (*ptr)(int, int);
    // // ptr = &sum;
    // ptr = sum;
    // greetNamaskaramAndExecute(ptr);
    // printf("\n");
    // greetShubhPrabhaatAndExecute(ptr);

    // Task
    float (*ptre)(int, int) = average;
    int a, b;
    printf("Enter two numbers :");
    scanf("%d %d", &a, &b);
    greetSubhAprahanAndExecute(a, b, ptre);
    greetSusandhyaAndExecute(a, b, ptre);

    return 0;
}
