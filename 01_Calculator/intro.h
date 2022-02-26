#ifndef C_OURSE_INTRO_H
#define C_OURSE_INTRO_H

#include <stdio.h>

static int get_int(void)
{
    int input = 0;

    if (scanf(" %d", &input) != 1)
    {
        printf("Enter a whole number: ");
        while (getchar() != '\n');
        input = get_int();
    }

    return input;
}

static char get_char(void)
{
    char input = 0;

    scanf(" %c", &input);

    return input;
}

static float get_float(void)
{
    float input = 0;

    if (scanf(" %f", &input) != 1)
    {
        printf("Enter a decimal number: ");
        while (getchar() != '\n');
        input = get_float();
    }

    return input;
}

#endif // C_OURSE_INTRO_H