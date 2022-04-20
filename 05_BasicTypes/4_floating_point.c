#include <stdio.h>

int main()
{
    printf("Floating point types:\n");

    float f = 1.0 / 3;

    printf("float  1/3 == %f\n", f);
    printf("float  1/3 == %.12f (precision is limited)\n", f);

    double lf = 1.0 / 3;
    printf("double 1/3 == %.18lf\n", lf);

    // More about 1.0L when we talk about Literals
    long double llf = 1.0L / 3;

    printf("\nBeware the float:\n");

    f = 1000000.05;
    printf("1000000.05 ?= %f    (precision depends on scale)\n", f);

    f = 1.1;
    printf("1.1        ?= %.15f (simple-looking numbers can be inaccurate)\n", f);
    f = 1.25;
    printf("1.25       ?= %.15f (not all of them are)\n", f);

    printf("\nComparing floats is dangerous:\n");

    if (1.1 == 1.1)
    {
        printf("1.1 == 1.1\n");
    }
    else
    {
        printf("1.1 != 1.1 (what?)\n");
    }

    if (1.1 == 1.2 - 0.1)
    {
        printf("1.1 == 1.2 - 0.1\n");
    }
    else
    {
        printf("1.1 != 1.2 - 0.1 (what?)\n");
    }
}
