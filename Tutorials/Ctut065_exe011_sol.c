/* EXERCISE 011 SOLUTION */


// #include <stdio.h>
// #include <stdlib.h>

// int isPalindrome(int number)
// {
//     int reverse = 0, original = number;

//     while (number != 0)
//     {
//         reverse = reverse * 10 + number % 10;
//         number = number / 10;
//     }

//     if (original == reverse)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

// int main()
// {
//     int number;
//     printf("Enter a number to check whether it is apalindrome or not:\n");
//     scanf("%d", &number);

//     // Your task is to implement this function

//     if (isPalindrome(number))
//     {
//         printf("This number is a palindrome\n");
//     }
//     else
//     {
//         printf("This number is not a palindrome %d\n", number);
//     }

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int MAX = 100;

// char *mystrrev(char *str)
// {
//     int str_len = strlen(str);
//     char a, b, c;
//     for (int i = 0; i < (str_len) / 2; i++)
//     {
//         a = str[i];
//         str[i] = str[str_len - 1 - i];
//         str[str_len - 1 - i] = a;
//     }
//     str[str_len] = '\0';
//     return str;
// }

int isPalindrome(char *str)
{
    int len = strlen(str) - 2; /* strlen() gives 2 more the required value */

    for (int i = 0; i < ((len) / 2); i++)
    {
        if (str[i] != str[len - i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char string[MAX];

    printf("Enter your String:\n");
    fgets(string, MAX, stdin);

    if (isPalindrome(string))
    {
        printf("This Word is palindrome.\n");
    }
    else
    {
        printf("This Word is not palindrome.\n");
    }

    return 0;
}