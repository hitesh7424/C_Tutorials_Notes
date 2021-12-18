/* EXERCISE 5 SOLUTION BY SWAPPING METHOD */

#include <stdio.h>

void arrayRev(int arr[], int arrLength)
{
    int temp;
    arrLength = arrLength - 1;

    for (int i = 0; i <= (arrLength / 2); i++)
    {

        // swap arr[i] with arr[arrLentgth-i]

        temp = arr[i];
        arr[i] = arr[arrLength - i];
        arr[arrLength - i] = temp;
    }
}

void arrayPrint(int arr[], int arrayLength)
{
    for (int i = 0; i < arrayLength; i++)
    {
        printf("%d\n", arr[i]);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int arrlen = ((sizeof(arr)) / (sizeof(arr[0])));
    printf("Before arrayRev\n");
    arrayPrint(arr, arrlen);

    arrayRev(arr, arrlen);

    printf("\nAfter arrayRev\n");
    arrayPrint(arr, arrlen);


    return 0;
}