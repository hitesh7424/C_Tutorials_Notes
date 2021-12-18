// Break and Continue

/*

BREAK STATEMENT
    > Used to bring the program control out of the loop.
    > The break statement is used inside loops or switch statement.
    > Break statemnet can be used with
        > Loops
        > Switch case expressions

*/

/*
#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Hello World\n\n");
    int i, age;

    for (i = 1; i < 21; i++)
    {
        printf("%d. Enter your age: ", i);
        scanf("%d", &age);
        printf("hello your age is %d.\n\n", age);
        if (age > 10)
        {
            break;
        }
    }

    return 0;
}
*/

/*

CONTINUE STATEMENT
    > Used to bring the program control to next iteration of the loop.
    > The continue statement skips some code inside the loop and continues with the next iteration.
    > It is mainly used for a condition so that we can skip some lines of codefor a particular condition.

*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Hello World\n\n");
    int i, age;

    for (i = 1; i < 21; i++)
    {
        printf("%d. Enter your age: ", i);
        scanf("%d", &age);
        printf("\nhello your age is %d.\n\n", age);
        if (age < 17)
        {
            printf("Hello, how are you?\n");
            printf("Fine, and you?\n");
            printf("Nice, I an also fine.\n\n");
            continue;
        }
        printf("Who the hell are you?\n");
        printf("Fuck off.\n\n");
        printf("भाग भोसरीके");
        break;
    }

    return 0;
}