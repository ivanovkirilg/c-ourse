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
        // some code here?

        putchar(k);

        k = getchar();
    }
}
