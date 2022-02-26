// File with custom functionality - get_char, get_int, get_float
#include "intro.h"

// main - a special function, this is where our program starts running
int main()
{
    // Define variables and get user input
    float left_number = get_float();
    char operator = get_char();
    float right_number = get_float();
    float total = 0.00;

    // Carry out operation based on the character
    if (operator == '+')
    {
        total = left_number + right_number;
    }
    if (operator == '-')
    {
        total = left_number - right_number;
    }
    if (operator == '*')
    {
        total = left_number * right_number;
    }
    if (operator == '/')
    {
        total = left_number / right_number;
    }

    // Put the result into the terminal
    printf("Total: %f\n", total);
}
