#include <stdio.h>

char to_lower(char c) {
    if (c >= 65 && c <= 90) {
        c = c + ('a' - 'A');
    }
    return c;
}


int main() 
{
    char c = getchar();

    while(c != EOF) {
        // c = to_upper(c);
        c = to_lower(c);
        putchar(c);
        c = getchar();
    }
}

