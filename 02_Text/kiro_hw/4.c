/* 
Print out all input, except punctuation

< Input:
hello, world!
(12-year old)
array[index]
function { body }

> Output:
hello world
12year old
arrayindex
function  body 

*/

#include <stdio.h>

int is_punct(char c)
{
    if (   (c >= '!') && (c <= '/')
        || (c >= ':') && (c <= '@')
        || (c >= '[') && (c <= '`')
        || (c >= '{') && (c <= '~') )
    {
        //     true
        return 1;
    }

    //     false
    return 0;
}

int main()
{
    char c = getchar();

    while (c != EOF)
    {
        //  ! - not
        if (!is_punct(c))
        {
            putchar(c);
        }

        c = getchar();
    }
}
