// Switch Case Statements

/*

Rules for Switch Statement =>

    1> Switch Expression must be an int or char not float.
    2> Case value must be an int or a char and not float. 
    3> Case must come inside switch.
    4> break is not a must.

FLOWCHART = Flowcharts/Ctut011_flowchart_switch_statement.png

*/

/*
# include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);

    switch (age)
    {
    case 3:
        printf("Your age is 3.\n");
        break;
    
    case 13:
        printf("Your age is 13.\n");
        break;
    
    case 23:
        printf("Your age is 23.\n");
        break;

    default:
    printf("Your age is not 3, 13 or 23.\n");
        break;
    }

    return 0;
}
*/

/*

If we remove break it will print all cases which is below this and also print default.

*/

// Nested Switch Statement =>

/*

# include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;

    printf("Enter your age\n");
    scanf("%d", &age);

    char name;

    printf("Enter the first letter of your name\n");
    scanf(" %c", &name);

    switch (age)
    {
    case 3:
        printf("Your age is 3.\n");
        switch (name)
        {
        case 'h':
            printf("Your name starts with h.\n");
            break;

        case 'n':
            printf("Your name starts with n.\n");
            break;
        
        default:
            printf("Your name does not starts with h or n.\n");
            break;
        }
        break;
    
    case 13:
        printf("Your age is 13.\n");
        switch (name)
        {
        case 'h':
            printf("Your name starts with h.\n");
            break;

        case 'n':
            printf("Your name starts with n.\n");
            break;
        
        default:
            printf("Your name does not starts with h or n.\n");
            break;
        }
        
        break;
    
    case 23:
        printf("Your age is 23.\n");
        switch (name)
        {
        case 'h':
            printf("Your name starts with h.\n");
            break;

        case 'n':
            printf("Your name starts with n.\n");
            break;
        
        default:
            printf("Your name does not starts with h or n.\n");
            break;
        }
    
        break;

    default:
    printf("Your age is not 3, 13 or 23.\n");
        break;
    }

    return 0;
}
*/

// comment program

#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* User login */
    int uid, password;
    printf("Enter User ID\n");
    scanf("%d", &uid);

    switch (uid)
    {
    case 123456:
        printf("Enter Password\n");
        scanf("%d", &password);

        switch (password)
        {
        case 67890:
            printf("Welcome 123456\n");
            printf("Secret message!\n");
            printf(
                "You are invited to secret party \n"
                "that you have requested for\n");
            break;

        default:
            printf("Incorrect password!");
            printf("asshole.");
            break;
        }

        break;

    default:
        printf("You are not in user list.\n");
        printf("Who the hell are you?\n");
        printf("Fuck off.\n");
        break;
    }

    return 0;
}
