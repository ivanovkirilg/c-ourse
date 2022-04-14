#include <stdio.h>

char uppercase(char character)
{
    if (character >= 'a' && character <= 'z')
    {
        character = character - ('a' - 'A');
    }

    return character;
}

int main()
{
    char Bye[] = "GoodBye"; // "GOodBye"
    Bye[1] = uppercase(Bye[1]);

    printf("%s\n", Bye);
}

