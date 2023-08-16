#include "main.h"

/**
 * print_sign - This will determine if the
 * input is greater than, less than, or
 * equal to zero.
 * @n: The input
 * Return: The program will return 1 for greater than 0,
 * 0 for equal to 0
 * and -1 for less than 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
