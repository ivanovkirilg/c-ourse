#include <stdio.h>
#include <math.h>

/* Тази програма трябва да изпише
 * всички прости делители на дадено число.
 * Например: 12 се дели на 2, 2, 3 (2*2*3==12)
 *           126 == 2 * 3 * 3 * 7
 *
 * Тя го прави успешно... но не приключва.
 * Защо? (Поправете я.)
 */

float get_remainder(int num, int divisor)
{
    // Hint: This function is correct,
    //       ignore if it looks scary.
    double quotient = (double) num / divisor;
    return modf(quotient, &quotient);
}

int main()
{
    int num = 126;
    int factor = 2;
    float remainder = 0.0;

    // We're dividing, we'll never get to 0
    while (num > 1)
    {
        remainder = get_remainder(num, factor);

        if (remainder == 0.0)
        {
            printf("%d\n", factor);
            num = num / factor;
        }
        else
        {
            factor = factor + 1;
        }
    }
}
