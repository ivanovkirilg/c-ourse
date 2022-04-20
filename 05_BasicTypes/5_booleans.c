#include <stdio.h>
#include <stdbool.h>

int main()
{
    // Standard built-in type (since C99)
    _Bool b = 0;

    // From stdbool.h (since C99)
    bool b1 = false;

    b = 2000;  // Any non-0 is converted to 1,
    b1 = -15;  // which is the value of 'true'

    if (b == true)
    {
        printf("b (2000?) == true (1)\n");
    }
    else
    {
        printf("b (2000?) != true (1)\n");
    }

    if (2000 == true)
    {
        printf("    2000  == true (1)\n");
    }
    else
    {
        printf("    2000  != true (1)\n");
    }

    if (b == b1)
    {
        printf("b (2000?) == b1 (-15?)\n");
    }
    else
    {
        printf("b (2000?) != b1 (-15?)\n");
    }

    printf("Value of non-0 bool: %d (or _Bool: %d)\n\n", b, b1);


#pragma message ("The compiler already knows this is bad and warns us:")
    char c = 256; //
    b = 256;

    printf("'char' and 'bool' take up the same memory,\n"
           " but bool doesn't overflow like char does:\n"
           " c=256 => %d, b=256 => %d", c, b);
}