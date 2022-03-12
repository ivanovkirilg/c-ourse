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
        if ((input > '0') && (input < '9'))
        {
            sum_of_digits = sum_of_digits + input;
        }

        input = getchar();
    }

    printf("%d\n", sum_of_digits);
}
