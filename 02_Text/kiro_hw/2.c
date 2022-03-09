#include <stdio.h>

/* 
Print out all input, except the letter 'o'

(copy-paste into the terminal to test)
< Input:
hello world!
oreo Oreo
oooo yeah

> Output:
hell wrld!
re Ore
 yeah

*/

int main()
{
    char k = getchar();

    while (k != EOF)
    {
        if (k != 'o')
        {
            putchar(k);
        }

        k = getchar();
    }
}
