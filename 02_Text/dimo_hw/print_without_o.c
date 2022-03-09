#include <stdio.h>

int main()
{
    char c = getchar();

    while (c != EOF)
    {
        if(c != 'o') {
            putchar(c);
        }
        c = getchar();
    }
}