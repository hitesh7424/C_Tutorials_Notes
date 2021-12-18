// Exercise of Recursion

// Fibonacci series

#include <stdio.h>
/*
int fib_recursive(int n)
{

    if (n == 2 || n == 3)
    {
        return 1;
    }
    else if (n == 1)
    {
        return 0;
    }

    else
    {
        return (fib_recursive(n - 1) + fib_recursive(n - 2));
    }
}

int main()
{
    int n = 47;
    int i = 1;
    printf("fib_series>\n");
    // scanf("%d", &n);

    while (i != n)
    {
        printf("%d\n", fib_recursive(i));
        i++;
    }

    printf("\n");

    return 0;
}

// took 3s for 42th fibonacci number
// took 29s for 47th fibonacci number
*/
/*

#include <stdio.h>

int main()
{
    int n = 47, t1 = 0, t2 = 1, t3;
    // printf("Enter the number of terms: ");
    // scanf("%d", &n);
    printf("Fibonacci Series:\n");

    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", t1);
        t3 = (t1 + t2);
        t1 = t2;
        t2 = t3;
    }

    return 0;
}

// took 82ms for 42th fibonacci number
// took 90ms for 47th fibonacci number

*/