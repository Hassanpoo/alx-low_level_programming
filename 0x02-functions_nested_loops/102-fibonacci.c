#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the first 50 Fibonacci numbers
 * starting with 1 and 2, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int fibonacci[50];
	int i;

	/* Initialize the first two numbers of the Fibonacci sequence */
	fibonacci[0] = 1;
	fibonacci[1] = 2;

	/* Generate the Fibonacci sequence */
	for (i = 2; i < 50; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}

	/* Print the first 50 Fibonacci numbers with the required format */
	for (i = 0; i < 49; i++)
	{
		printf("%d, ", fibonacci[i]);
	}
	printf("%d\n", fibonacci[49]);

	return (0);
}
