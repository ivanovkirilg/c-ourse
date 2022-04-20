#include <stdio.h>

int main()
{
    printf("Sizes:\n");

    // sizeof() returns a positive number of type 'size_t'
    // This is the type we should always use to represent sizes
    // Note the format specifier - %zu

    printf("char:        %zu\n", sizeof(char));
    printf("short:       %zu\n", sizeof(short));
    printf("int:         %zu\n", sizeof(int));
    printf("long:        %zu\n", sizeof(long));
    printf("long long:   %zu\n", sizeof(long long));
    printf("float:       %zu\n", sizeof(float));
    printf("double:      %zu\n", sizeof(double));
    printf("long double: %zu\n", sizeof(long double));
    printf("_Bool:       %zu\n", sizeof(_Bool));
    printf("size_t:      %zu\n", sizeof(size_t));

    printf("We can also ask for the size of a value: %zu", sizeof(1.2));
}
