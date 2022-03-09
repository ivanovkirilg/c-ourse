#include <stdio.h>

int main() {

    char c = getchar();

    while (c != EOF) {
        if(c < '0' || c > '9') {
            putchar(c);
        }
        c = getchar();
    }
}