// Recursive Functions

/*

What is a recursive function?

    > Recursive functions or recursions is a process when a function calls a copy of itslf to work
on a small problem.
    > Any function which cslls itself is called recursive function.
    > This makes the life of progrsmmer easy by dividing a given problem into easier problems.
    > A termination point is imposed on such functions to stop them executing copies of themselves 
forever.
    > Any problem that can be solved recursively, can also be solved iterativery.

*/

/*

Why Recurctions?

    > Any problem that can be solved recursively, can also be solved iterativery.
    > However, some problems are best suited to be solved using recursion.
    > For example, tower of hanoi, Fibonacci series, factorial finding, etc.

*/

/*

EXAMPLE 1:Factorial calculation

    > The case at which the function doesn't recur is called the base case.
    > The instances where the function keeps calling itself to perform a subtask, is called the recursive case.
    > For factorial calculation the base occurs at the parameter value of 0 and 1.

*/

#include<stdio.h>

int factorial(int number)
{
    if (number == 1 || number ==0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number-1));
    }
    
}

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number you want the factorial of: ");
    scanf("%d", &num);

    printf("The factorial of %d is %d\n", num, factorial(num));

    return 0;
}
