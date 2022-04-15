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
    // Use the 'uppercase' function
    // to transform the entire `message`

    char message[] = "GoodBye"; // "GOODBYE"

}
