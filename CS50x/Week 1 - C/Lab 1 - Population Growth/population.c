#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // Defining variables
    int startSize = 0;
    int endSize = 0;
    int years = 0;
    int born;
    int died;
    int gain;

    // Asking for values
    while (startSize < 9)
    {
        startSize = get_int("Start size: ");
    }

    while (endSize < startSize)
    {
        endSize = get_int("End size: ");
    }

    // Calculating
    while (startSize < endSize)
    {
        born = floor(startSize / 3);
        died = floor(startSize / 4);
        gain = born - died;
        startSize += gain;
        years++;
    }

    // Printing required years
    printf("Years: %i\n", years);
}
