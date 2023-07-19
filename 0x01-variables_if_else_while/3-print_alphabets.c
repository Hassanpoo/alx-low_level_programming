#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase and uppercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
    char lowercase;
    char uppercase;

    for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
        putchar(lowercase);

    for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
        putchar(uppercase);

    putchar('\n');

    return 0;
}}
