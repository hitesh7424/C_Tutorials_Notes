/*

Given two numbers a and b, add them then substract them and assign them to a and b using call by reference.

a = 5
b = 3

after runnig program
a = 8
b = 2

*/

#include <stdio.h>

void addSubtaract(int *x, int *y)
{
    *x = *x + *y;
    *y = *x - (*y * 2);
}

int main()
{
    int a, b;
    printf("enter 1st no. >");
    scanf("%d", &a);
    printf("enter 2nd no. > ");
    scanf("%d", &b);

    int tempa = a;
    int tempb = b;

    addSubtaract(&a, &b);

    printf("%d + %d = %d\n", tempa, tempb, a);
    printf("%d - %d = %d\n", tempa, tempb, b);

    return 0;
}