#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Finds and prints the sum of the even-valued terms
 * in the Fibonacci sequence, up to the term that does not exceed 4,000,000.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int first = 1, second = 2, next, sum = 2;

	while (1)
	{
		next = first + second;

		if (next > 4000000)
			break;

		if (next % 2 == 0)
			sum += next;

		first = second;
		second = next;
	}

	printf("%ld\n", sum);

	return (0);
}
