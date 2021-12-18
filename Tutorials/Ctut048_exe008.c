/* EXERCISE 008 */

/* 

Dynamic memory allocation

ABC Pvt Ltd manages employee record of other companies.
Employee Id can be of any length and it can contain any character
for 3 employees, you have to take 'length of employee id' as input in a length integer variable.
Then you have to take employee is as input and display it on screen.
Store the employee id in a character array which is allocaed dynamically.
You have to create only one character array dynamically


employee 1:
enter no of character in your eid
45
dynamically allocate
take input from user

employee 2:
enter no of character in your eid
9
dynamically allocate
take input from user

employee 3:
enter no of character in your eid
21
dynamically allocate
take input from user


*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int len;
    char *id;
    int i = 0;

    for (int i = 0; i < 3; i++)
    {
        // Taking length of id as input
        printf("Employee: %d\n\nEnter the No. of character your Employee Id has\n> ", i + 1);
        scanf("%d", &len);
        printf("\n");

        // allocating dynamic memory
        id = (char *)malloc((len + 1) * sizeof(char));

        // Taking id
        printf("Enter your Employee Id\n> ");
        scanf("%s", id);
        printf("\n");

        // Printing id
        printf("Your Employee Id is %s\n", id);
        printf("\n\n");

        // freeing the dynamic memory
        free(id);
    }

    return 0;
}