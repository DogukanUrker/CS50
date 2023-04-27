#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Ask height
    int height;
    do
    {
        height = get_int("Height: ");
    }

    while (height < 1  || height > 8);
    for (int i = 0; i < height; i++)
    {

        // Spaces
        for (int j = height - 1; j > i; j--)
        {
            printf(" ");
        }

        // Hashes
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }

        printf("\n");
    }
}