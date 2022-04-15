#include <stdio.h>

/* Програмата е предназначена да сумира
 * стойността на всяка цифра, получена на stdin.
 * h3110 9ary
 *  3110 9
 * 3+1+1+9 == 14
 *
 * В програмата има две отделни грешки.
 * Поправете ги.
 */

int main()
{
    char input = getchar();
    int sum_of_digits = 0;

    while (input != EOF)
    {
        // (input < '9') didn't include the 9
        // But we don't need to add a 0
        if ((input > '0') && (input <= '9'))
        {
            // The char '0' has a numerical value of 48,
            // '1' == 49, etc. So we convert it first
            const int input_num = input - '0';
            sum_of_digits = sum_of_digits + input_num;
        }

        input = getchar();
    }

    printf("%d\n", sum_of_digits);
}
