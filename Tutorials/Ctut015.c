// For loop

/*

Why use for loop?
    > The for loop os used to iterate the statements or a part of program several times.
    > It is used to traverse the data structures like the arrays and linked lists.
    > It has little different syntax than while and do while loops.
    > The syntax of for loop in c language is given below:

        for(Expression 1; Expression 2; Expression 3){
            // code to be run
        }

*/

/*

 Properties of Expression 1:
    > The expression represents the initialization of the loop variable.
    > We can initialize more than one variable in Expression 1.
    > expression 1 is optional.

*/
/*
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, j = 0;

    for (i = 0; i < 5; i++)
    {
        printf("%d %d\n", i, j);
    }

    return 0;
}
*/
/*

 Properties of Expression 1:
    > It is a conditional expression. It checks for a specific condition to be satisfied. 
        If it is not, the loop is terminated.
    > It can have more than one condition. However, the loop will iterate until the last 
        condition become false. Other condition will be treated as statements.
    > It is optional.
    > Expression 2 can perform the task of expression 1 and expression 3. That is, we can
        initialize the variable as well as update the loop variable in expression 2 itself.
    > We can pass zero or non-zero value in expression 2. However, in C, any non-zero value
        is true, and zero is false by default.

*/
/*
#include <stdio.h>

int main()
{
    int i, j = 9, count = 5;
    for (i = 0; i < count; i++)
    {
        printf("%d %d\n", i, j, count);
        j++;
    }

    return 0;
}
*/
/*

Properties of Expression 3:
    > Expression 3 is used to update the loop variable.
    > We can update more than one variable at the same time.
    > Expression 3 is optional.

*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i = 0;
    for (;;)
    {
        printf("%d\n", i);
        i++;
    }
    

    return 0;
}
