#include <stdio.h>

// What is an Operator?
// > An operator is a symbol used to perform operations in given programming language.
// > In this tutorial series, we will look into operators used in the C programming language.

// Types of Operator in C Language
// > Arithmetic Operators
// > Relational Operators
// > Logical Operators
// > Bitwise Operators
// > Assignment Operators

// Arithmetic Operators >
// .-------------|------------------.
// |Operators    |   Description    |
// |-------------|------------------|
// |     +       |   Addition       |
// |     -       |   Substraction   |
// |     *       |   Multiplication |
// |     /       |   Division       |
// |     %       |   Modulus        |
// '-------------'------------------'

// int main(int argc, char const *argv[])
// {
//     int a, b;
//     a = 32;
//     b = 12;

//     printf("a + b = %d\n", a+b);
//     printf("a - b = %d\n", a-b);
//     printf("a * b = %d\n", a*b);
//     printf("a / b = %d\n", a/b);
//     printf("a % b = %d\n", a%b);

//     return 0;
// }

// Relational Operators>
// .-------------.------------------------------.
// |Operators    |      Description             |
// |-------------|------------------------------|
// |     ==      |   Is equal to                |
// |     !=      |   Is not equal to            |
// |     >       |   Greater than               |
// |     <       |   Less than                  |
// |     >=      |   Greater than or equal to   |
// |     <=      |   Less than or equal to      |
// '-------------'------------------------------'

// int main(int argc, char const *argv[])
// {
//     int a, b;
//     a = 20;
//     b = 20;
//     printf("If True print 1\n %d\n", a==b);
//     a = 90;
//     printf("If False prints 0\n %d\n", a==b);
//     return 0;
// }

// Relational Operators>
// .-------------.-------------------------------------------.-----------------------.
// |Operators    |   Description                             |   Example             |
// |-------------|-------------------------------------------|-----------------------|
// |     &&      |   Logical AND operator. If both           |   (A && B) is false.  |
// |             |   the operands are non-zero,then          |                       |
// |             |    the condition is true.                 |                       |
// |-------------|-------------------------------------------|-----------------------|
// |     ||      |   Logical OR operator. If any of          |   (A||b) is true.     |
// |             |    these two operands is non-zero         |                       |
// |             |   , hen condition becomes true.           |                       |
// |-------------|-------------------------------------------|-----------------------|
// |     !       |   Logical NOT operator. It is used        |   !(A && B) is true.  |
// |             |    to reverse the logical state of        |                       |
// |             |    its operand. If condition is true      |                       |
// |             |    then NOT operator will make it false.  |                       |
// '-------------'-------------------------------------------'-----------------------'

// int main()
// {
//     int a, b;
//     a = 10;
//     b = 10;

//     printf("   a && b   = %d\n", a&&b);
//     printf("   a || b   = %d\n", a||b);
//     printf("!(a && b)   = %d\n", !(a && b));

//     return 0;
// }

// Bitwise Operaors >
// .--------.-------.-------------.-------------.-------------.
// |    a   |   b   |   a & b     |   a | b     |   a ^ b     |
// |--------|-------|-------------|-------------|-------------|
// |    0   |   0   |      0      |     0       |       0     |
// |--------|-------|-------------|-------------|-------------|
// |    0   |   1   |      0      |     1       |       1     |
// |--------|-------|-------------|-------------|-------------|
// |    1   |   1   |      1      |     1       |       0     |
// |--------|-------|-------------|-------------|-------------|
// |    1   |   0   |      0      |     1       |       1     |
// '--------'-------'-------------'-------------'-------------'

// 1 = sach (true)
// 0 = jhoot (false)

int main()
{
    int a, b;
    a = 2;
    b = 3;

    printf("a = %d\nb = %d\n\n", a, b);
    printf(" a&b  = %d\n", a & b);
    printf(" a|b  = %d\n", a | b);
    printf(" a^b  = %d\n", a ^ b);

    return 0;
}

// Other Bitwise OPerator >
//      ~ is the binary one's complement operator
//      << is the binary left shift operator
//      >> is the binary right shift operator

// Assignment Operators >
// .----------------.-----------------------------------------------------------.
// |    Operators   |                   Description                             |
// |----------------------------------------------------------------------------|
// |        =       |   Simple assignment operator. Assign values from right    |
// |                |       side operands to left side operand.                 |
// |----------------------------------------------------------------------------|
// |        +=      |   Add AND assignment operator. It adds the right operand  |
// |                |       to the left operand and assign the result to the    |
// |                |           left operand.                                   |
// |----------------------------------------------------------------------------|
// |        -=      |   Substruct AND assignment operator. It substracts the    |
// |                |       right operand from thr left operand and the result  |
// |                |           is assigned to the left operand.                |
// |----------------------------------------------------------------------------|
// |        *=      |   Multiply AND assignment operator. It multiplies the     |
// |                |       right operand with the left operand and the result  |
// |                |           is assigned to left operand.                    |
// |----------------------------------------------------------------------------|
// |        /=      |   Divide AND assignment operator. It divides the left     |
// |                |       operand with the right operand and the result is    |
// |                |           assigned to the left operand.                   |
// '----------------'-----------------------------------------------------------'

// Operator Precedence in C >
//  .--------------------.-------------------------------------.----------------.
//  |     Caregory       |            Operator                 |  Associativity |
//  |--------------------|-------------------------------------|----------------|
//  |     Postfix        |             () [] -> ++ --          |  Left to right |
//  |--------------------|-------------------------------------|----------------|
//  |      Unary         |   + - ! ~ ++ -- (type)* & sizeof    |  Right to left |
//  |--------------------|-------------------------------------|----------------|
//  |  MUltiplicative    |                 * / %               |  Left to right |
//  |--------------------|-------------------------------------|----------------|
//  |     Additive       |                  +-                 |  Left to right |
//  |--------------------|-------------------------------------|----------------|
//  |      Shift         |                  << >>              |  Left to right |
//  |--------------------|-------------------------------------|----------------|
//  |    Relational      |              < <= > >=              |  Left to right |
//  |--------------------|-------------------------------------|----------------|
//  |     Equality       |                  == !=              |  Left to right |
//  |--------------------|-------------------------------------|----------------|
//  |   Bitwise AND      |                  %                  |  Left to right |
//  |--------------------|-------------------------------------|----------------|
//  |   Bitwise XOR      |                  ^                  |  Left to right |
//  |--------------------|-------------------------------------|----------------|
//  |   Bitwise OR       |                   |                 |  Left to right |
//  |--------------------|-------------------------------------|----------------|
//  |   Logical AND      |                  &&                 |  Left to right |
//  |--------------------|-------------------------------------|----------------|
//  |   Logical OR       |                  ||                 |  Left to right |
//  |--------------------|-------------------------------------|----------------|
//  |   Conditional      |                  ?:                 |  Right to left |
//  |--------------------|-------------------------------------|----------------|
//  |   Assignment       |  = += -= *= /= %= >>= <<= &= ^= |=  |  Right to left |
//  |--------------------|-------------------------------------|----------------|
//  |     Comma          |                  ,                  |  Left to right |
//  '--------------------'-------------------------------------'----------------'
//
// .-----------------------------------.
// | In programming language,          |
// | the associativity of an operator  |
// | is a property that determines how |
// | operators of the same             |
// | precendence are grouped in the    |
// | absence of parenthesis.           |
// '-----------------------------------'