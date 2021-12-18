/* EXERCISE 7 */

/* 

You manage a travel agency and you want your n drivers to input their following details:
1. Name
2. Driving license No
3. Route
4. Kms

Your program should able to take n as input (or you can take n=3 for simplicity) and your drivers will start inputting their details one by one.

Your program should print details of the drivers in a beautiful fashion.
Use structures.

*/

#include <stdio.h>
#include <string.h>
// #include <stdin.h>

typedef struct drivers
{
    char name[30];
    char dlno[20];
    char route[30];
    int kms;
} dr;

int main()
{
    dr d1, d2, d3;
    printf("\nEnter the required details below: \n\n");

// Driver 1
    printf("Driver 1 ");
    printf("> Name  : ");
    scanf("%s", &d1.name);

    printf("         > DL no : ");
    scanf("%s", &d1.dlno);

    printf("         > Route : ");
    scanf("%s", &d1.route);

    printf("         > Kms   : ");
    scanf("%d", &d1.kms);

    printf("\n");

// Driver 2
    printf("Driver 2 ");
    printf("> Name  : ");
    scanf("%s", &d2.name);

    printf("         > DL no : ");
    scanf("%s", &d2.dlno);

    printf("         > Route : ");
    scanf("%s", &d2.route);

    printf("         > Kms   : ");
    scanf("%d", &d2.kms);

    printf("\n");

// Driver 3
    printf("Driver 3 ");
    printf("> Name  : ");
    scanf("%s", &d3.name);

    printf("         > DL no : ");
    scanf("%s", &d3.dlno);

    printf("         > Route : ");
    scanf("%s", &d3.route);

    printf("         > Kms   : ");
    scanf("%d", &d3.kms);

    printf("\n");


// Printing Drivers Informations

    printf("\n\n\n******The Details of Drivers are following*******\n\n");

// Driver 1
    printf("Details of First Driver =>\n");
    printf("   Name  : %s\n",d1.name);
    printf("   DL no : %s\n",d1.dlno);
    printf("   Route : %s\n",d1.route);
    printf("   Kms   : %d\n",d1.kms);
    printf("\n\n");

// Driver 2
    printf("Details of Second Driver =>\n");
    printf("   Name  : %s\n",d2.name);
    printf("   DL no : %s\n",d2.dlno);
    printf("   Route : %s\n",d2.route);
    printf("   Kms   : %d\n",d2.kms);
    printf("\n\n");

// Driver 3
    printf("Details of Third Driver =>\n");
    printf("   Name  : %s\n",d3.name);
    printf("   DL no : %s\n",d3.dlno);
    printf("   Route : %s\n",d3.route);
    printf("   Kms   : %d\n",d3.kms);
    printf("\n\n");




    return 0;
}