#include "main.h"

/**
 * print_diagonal - This program will print a diagonal to the terminal.
 * @n: Number of times _ will be printed
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int s, c;

	if (n <= 0)
		_putchar('\n');

	for (s = 0; s < n; s++)
	{
		for (c = 0; c < s; c++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
