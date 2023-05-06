#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Asking for name
    string name = get_string("What's your name? ");

    // Printing "hello, {name}
    printf("hello, %s\n", name);
}