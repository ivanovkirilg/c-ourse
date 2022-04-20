#include <stdio.h>

int main()
{
    printf("What we know:\n");

    char  symbol = 'a';
    int   number = 30000;
    float decimal = 1.5;

    printf("char: %d=='%c' int: %d float: %f\n",
           symbol, symbol, number, decimal);
}
