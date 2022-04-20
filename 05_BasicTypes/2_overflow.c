#include <stdio.h>
#include <limits.h>

/*
Each integral type (char, int)
has a maximum and minimum value.
      (available in <limits.h>)
Exceeding these causes 'integer overflow'.

===  You can picture it like this:  ===

If we have 2 digits to represent a number,
then our minimum is 00, and maximum - 99.

00, 01, 02, ... 97, 98, 99, ??
The next number is 100, but we only have 2 digits.
In C, the 1 is just ignored, and we get 00 again.

So  98 + 4 = 2  and  0 - 3 = 97.

  * Numbers are stored in binary (only 0-1, not 0-9),
    so the actual limits aren't as intuitive as 99.
*/

int main()
{
    printf("Overflow:\n");

    // 'char' can represent numbers up to 127,
    // after which we wrap around to the mininum: -128
    char c = 0;

    for (int i = 0; i <= CHAR_MAX * 2; i++)
    {
        // New line every 8 numbers
        if (i % 8 == 0)
        {
            putchar('\n');
        }

        // 'int' can hold all these numbers, but 'char' overflows
        c = i;
        printf("%5d", c); // %5d to align them visually.
    }

    putchar('\n');
}
