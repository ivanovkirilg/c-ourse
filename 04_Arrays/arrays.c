#include <stdio.h>

// TODO: Explain
#define ARRAY_SIZE 5

int main()
{
    // |H|e|l|l|o|0| | | | | | | | | | |
    // | 0     | 1     | 2     | 3     |

    int nums[ARRAY_SIZE] = { 0, 1, 2, 3, 4 };
    int squares[ARRAY_SIZE];

    int index = 0;
    while (index < ARRAY_SIZE)
    {
        squares[index] = nums[index] * nums[index];

        index++;
    }

    for (index = 0; index < ARRAY_SIZE; index++) 
    {
        printf("array[%d] == %d\n", index, squares[index]);
    }
}
