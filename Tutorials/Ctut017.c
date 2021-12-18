// GoTo Statement

/*

GOTO STATEMENT :-
    > Also called jump statement in c.
    > Used to transfer program control to a predefined label.
    > Its use is avoided since it cause confusion for fellow programmers in understanding the code.
    > Goto statement is preferable when need to break loops using a single statement at the same time.
    > Lets go to the IDE and understand more!

*/

#include <stdio.h>

int main()
{
    // label:
    //     printf("We are inside label.\n");
    //     goto end;
    // printf("Hello World\n");
    // goto label;
    // end:
    //     printf("we are at end.\n");

    for (;;)
    {
        for (int num, j = 0; j < 10; j++)
        {
            printf("%d. Enter any number or type 0 to exit:", j + 1);
            scanf("%d", &num);
            if (num == 0)
            {
                goto end;
            }
        }
    }
end:
    return 0;
}
