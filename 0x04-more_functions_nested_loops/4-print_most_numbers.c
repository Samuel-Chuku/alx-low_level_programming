#include "main.h"

/**
 * * print_most_numbers - This program will print the
 * * digits from 0 to 9 without numbers 2 and 4
 * * Return: Will return void.
 */

void print_most_numbers(void)
{
	int s;

	for (s = 48; s <= 57; s++)
	{
		if (s == 50 || s == 52)
		{
			continue;
		}
		_putchar(s);
	}
	_putchar('\n');
}
