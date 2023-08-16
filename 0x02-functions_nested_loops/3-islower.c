#include "main.h"

/**
 * _islower - This will return o if the
 * character is a lower case and 1 for other
 * cases.
 * @c: The character in ASCII table.
 * Return: The program will return 1 for lower
 * case and 1 for others.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
