/* EXERCISE 011 */

/*

Checking palindrome in C

*/

#include <stdio.h>

int isPalindrome(int number)
{
    int reverse = 0, temp = number;

    while (temp != 0)
    {
        reverse = temp % 10 + reverse * 10;
        temp = temp / 10;
    }

    if (number == reverse)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int number;
    printf("Enter a number to check whether it is apalindrome or not:\n");
    scanf("%d", &number);

    // Your task is to implement this function

    if (isPalindrome(number))
    {
        printf("This number is a palindrome\n");
    }
    else
    {
        printf("This number is not a palindrome %d\n", number);
    }

    return 0;
}
