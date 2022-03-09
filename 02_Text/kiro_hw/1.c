#include <stdio.h>

/* 
Define the function 'lowercase',
so that any UPPERCASE letters are transformed to lowercase.
Leave all other characters as they are.
*/

char lowercase(char c)
{
    if ((c >= 'A') && (c <= 'Z'))
    {
        return c - ('A' - 'a');
    }
    
    return c;
}

int main()
{
    char k = getchar();

    while (k != EOF)
    {
        k = lowercase(k);

        putchar(k);

        k = getchar();
    }
}
