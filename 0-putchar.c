#include "main.h"

#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);

#endif /* MAIN_H */

/**
 * main - Entry point
 *
 * Description: Prints _putchar using putchar prototype
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);

	_putchar('\n');

	return (0);
}
