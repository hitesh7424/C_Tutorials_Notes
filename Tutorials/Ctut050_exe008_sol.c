/* EXERCISE 8 SOLUTION */

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int main()
// {
//     int len;
//     char *id;
//     int i = 0;

//     for (int i = 0; i < 3; i++)
//     {
//         // Taking length of id as input
//         printf("Employee: %d\n\nEnter the No. of character your Employee Id has\n> ", i + 1);
//         scanf("%d", &len);
//         printf("\n");

//         // allocating dynamic memory
//         id = (char *)malloc((len + 1) * sizeof(char));

//         // Taking id
//         printf("Enter your Employee Id\n> ");
//         scanf("%s", id);
//         printf("\n");

//         // Printing id
//         printf("Your Employee Id is %s\n", id);
//         printf("\n\n");

//         // freeing the dynamic memory
//         free(id);
//     }

//     return 0;
// }



#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char a,b,c;

    printf("Enter the value of a\n");
    scanf("%c", &a);
    getchar(); // This make us able to make input of next char variable by taking the enter input in itself
    
    printf("Enter the value of b\n");
    scanf("%c", &b);
    getchar();

    printf("Enter the value of c\n");
    scanf("%c", &c);
    
    printf("The value of a is %c\n", a);
    printf("The value of a is %c\n", b);
    printf("The value of a is %c\n", c);
    return 0;
}