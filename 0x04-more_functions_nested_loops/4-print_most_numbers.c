#include "holberton.h"

void print_most_numbers(void)
{
    char c;

    for (c = '0'; c <= '9'; c++)
    {
        if (c != '2' && c != '4')
        {
            _putchar(c);  // Assuming _putchar is used for character output
        }
    }

    _putchar('\n');
}

int main(void)
{
    print_most_numbers();
    return (0);
}
