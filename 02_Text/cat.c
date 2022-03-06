#include <stdio.h>

int main()
{
    // Define variable   Get character from terminal
    char c             = getchar();

    //    Is this the end of the line?
    while (c != EOF)
    {
        // Print the character currently stored in c
        putchar(c);

        // Get the net character from the terminal
        c = getchar();
    }
}

