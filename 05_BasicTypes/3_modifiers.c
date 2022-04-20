#include <stdio.h>

int main()
{
    printf("Modifiers:\n");

    unsigned char c = 0;
    printf("c == %d\n", c);

    c = -1; // -1 is below the type's min, so it overflows
    printf("unsigned -1 == %d\n", c);

    printf("\nBeware printing:\n");

    unsigned int i = -1;
    printf("i == %10u (%%u)\n", i); // Proper format specifier
    printf("i == %10d (%%d)\n", i); // Treated as 'signed' int:
                                    // this is also an overflow!

    printf("\nBeware uninitialized values:\n");
    short    int       hi;  // Smaller than 'int'
    long     int       li;  // Larger than 'int'
    long     long int  lli; // Even larger, maybe
    unsigned long long ull; // You can even omit 'int' (but don't)

    printf("%hd, %ld, %lld, %llu\n", hi, li, lli, ull);
}
