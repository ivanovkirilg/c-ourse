#include <stdio.h>

int main ()
{
    // 15 so we have some extra space
    // + 1 to show that we need space for a '\0'
    char letters[15 + 1] = "Hello 0";

    // Print with "%s" format specifier
    printf("My string is: %s\n", letters);
    printf("First char: %c\n", letters[0]);

    // Access a particular element with [n]
    letters[0] = 'h';
    letters[4] = 0;

    printf("My new string is: %s\n", letters);
}

