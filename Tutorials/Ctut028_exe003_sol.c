// Exercise 3 result

#include <stdio.h>

long int fib_recursive(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fib_recursive(n - 1) + fib_recursive(n - 2);
    }
}

int fib_iterative(int n)
{
    long int a = 0, b = 1;

    for (int i = 0; i < n - 1; i++)
    {
        b = a + b;
        a = b - a;
    }

    return a;
}

int main()
{
    int number;
    printf("Enter the index to get fibonacci series\n> ");
    scanf("%d", &number);

    printf("The value of fibonacci number at position %d using iterative approach is %ld\n", number, fib_iterative(number));

    printf("The value of fibonacci number at position %d using recursive approach is %ld\n",
           number, fib_recursive(number));
    return 0;
}

/*

Iterative is much faster than recursive in the above program 
that's why recursive is not always good. 

In my pc, at number = 42
    
    iterative takes = 92ms
    recursive takes = 2s

*/