#include "main.h"

/**
 * _isdigit - This will return 1 if the
 * character is a digit and 0 for other
 * cases.
 * @c: The character in ASCII table.
 * Return: The program will return 1 for digits
 * and 0 for others.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
