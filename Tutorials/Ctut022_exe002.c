// exercise 2

/*

Unit conversions

kms to miles
inches to foot
cms to inches
pounds to kgs
inches to meters

*/

#include <stdio.h>

int main()
{
    float kmsTomiles = 0.621371;
    float inchesTofoot = 0.0833333;
    float cmsToinches = 0.393701;
    float poundsTokgs = 0.453592;
    float inchesTometers = 0.0254;
    float first, second;
    char input;

    while (1)
    {
        printf("Unit Conversions\n");
        printf(
            "Enter input character to proceed:\n"
            "        1. kms to miles\n"
            "        2. inches to foot\n"
            "        3. cms to inches\n"
            "        4. pounds to kgs\n"
            "        5. inches to meters\n");
        printf("press q to quit\n");
        printf("input> ");
        scanf(" %c", &input);
        printf("\n");

        if (input == 'q')
        {
            printf("Quiting the program...\n");
            goto end;
        }
        

        printf("Enter quantity in terms of first unit\n");
        printf("quantity> ");
        scanf("%f", &first);
        printf("\n");

        switch (input)
        {
        case '1':
            second = first * kmsTomiles;
            printf("%.3f is equals to %.3f\n\n ", first, second);
            break;

        case '2':
            second = first * inchesTofoot;
            printf("%.3f is equals to %.3f\n\n ", first, second);
            break;

        case '3':
            second = first * cmsToinches;
            printf("%.3f is equals to %.3f\n\n ", first, second);
            break;

        case '4':
            second = first * poundsTokgs;
            printf("%.3f is equals to %.3f\n\n ", first, second);
            break;

        case '5':
            second = first * inchesTometers;
            printf("%.3f is equals to %.3f\n\n ", first, second);
            break;

        default:
            break;
        }
    }

end:
    return 0;
}
