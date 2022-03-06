#include <stdio.h>

/* 
result  name     (input         ) */
char    uppercase(char character)
{
    //                   and
    if (character >= 'a' && character <= 'z')
    {
        character = character - ('a' - 'A');
    }

    // Bring the result outside the function
    return character;
}

int main()
{
    char k = getchar();

    while (k != EOF)
    {
        k = uppercase(k);

        putchar(k);

        k = getchar();
    }
}
