#include "main.h"

/**
 * print_last_digit - prints the last digit of an
 * integer.
 * @s: the integer to be computed
 * Return: will return the last digit of
 * the integer.
 */

int print_last_digit(int s)
{
	int ld;

	ld = s % 10;
	if (ld < 0)
	{
		_putchar((ld + 48) * -1);
		return (ld);
	}
	else
	{
		_putchar(ld + 48);
		return (ld);
	}
}
