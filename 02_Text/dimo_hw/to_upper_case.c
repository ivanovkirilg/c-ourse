#include <stdio.h>

// Upper func
char to_upper(char c) {
    if(c >= 97 & c <= 122) {
        c = c - ('a' - 'A');
    }
    return c;
}


int main() 
{
    char c = getchar();

    while(c != EOF) {
        // c = to_upper(c);
        c = to_upper(c);
        putchar(c);
        c = getchar();
    }
}

