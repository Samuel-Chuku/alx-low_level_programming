#include "main.h"

/**
 * print_alphabet_x10 - This will print alphabets 10 times.
 * Return: The program will return void after successful execution.
 */

void print_alphabet_x10(void)
{
	int s, c;

	for (s = 1; s <= 10; s++)
	{
		for (c = 97; c <= 122; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
