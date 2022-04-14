#include <stdio.h>

int main ()
{
    // int path_size = 150;
    // char path[path_size] = "/path/to/diagnostics/";    
    // "/path/to/diagnostics/CLIENT/file.zip"

    char letters[15 + 1] = "Hello 0";
    
    printf("My string is: %s\n", letters);
    printf("First char: %c\n", letters[0]);

    letters[0] = 'h';
    letters[2] = 0;

    printf("My new string is: %s\n", letters);
}

