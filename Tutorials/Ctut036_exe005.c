/* EXERCISE 004 */

/* 

WRITE A FUNCTION TO REVERSE AN ARRAY
AND PRINT THE ARRAY BEFORE REVERSING
AND AFTER REVERSING ARRAY.

*/

#include <stdio.h>

void arrayRev(int *arr1, int arrlength)
{
    int arr2[arrlength];

    for (int i = 0, j = (arrlength - 1); i < arrlength; i++, j--)
    {
        arr2[i] = arr1[j];
    }

    for (int i = 0; i < arrlength; i++)
    {
        arr1[i] = arr2[i];
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    int arrlen = ((sizeof(arr)) / (sizeof(arr[0])));

    printf("Before reversing array :\n\n");
    for (int i = 0; i < arrlen; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("\n");

    arrayRev(arr, arrlen);

    printf("\n");
    printf("After reversing array :\n\n");

    for (int i = 0; i < arrlen; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}