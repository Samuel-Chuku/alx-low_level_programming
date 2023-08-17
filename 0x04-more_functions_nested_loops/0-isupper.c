#include "main.h"

/**
 * _isupper - This will return 1 if the
 * character is upper case and 0 for other
 * cases.
 * @c: The character in ASCII table.
 * Return: The program will return 1 for upper
 * case and 0 for others.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
