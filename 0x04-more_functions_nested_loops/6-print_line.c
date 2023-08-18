#include "main.h"

/**
 * print_line - This program will print a line to the terminal.
 * @n: Number of times _ will be printed
 * Return: Always 0.
 */

void print_line(int n)
{
	int s;

	for (s = 0; s < n; s++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
