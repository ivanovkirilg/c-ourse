/* 
Print out all input, except numbers

< Input:
He11o w0rld!
123
a1234b
1a2b3c4

> Output:
Heo wrld!

ab
abc

*/

#include <stdio.h>

int main()
{
    char c = getchar();

    while (c != EOF)
    {
        //            or
        if ((c < '0') || (c > '9'))
        {
            putchar(c);
        }

        c = getchar();
    }
}
