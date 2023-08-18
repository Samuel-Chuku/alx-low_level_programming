#include "main.h"

/**
 * print_square - This is a program that prints squares.
 * @size: Number of times squares will be printed
 * Return: Always 0.
 */

void print_square(int size)
{
	int s, c;

	if (size <= 0)
		_putchar('\n');

	for (s = 0; s < size; s++)
	{
		for (c = 0; c < size; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
