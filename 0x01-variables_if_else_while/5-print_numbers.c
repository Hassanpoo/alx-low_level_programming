#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints single-digit numbers of base 10 starting from 0
 *
 * Return: 0 (Success)
 */
int main(void)
{
    int digit;

    for (digit = 0; digit <= 9; digit++)
        putchar(digit + '0');

    putchar('\n');

    return 0;
}
