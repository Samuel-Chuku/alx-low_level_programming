#include "main.h"

/**
 * _isalpha - This will return 0 if the
 * character is a letter and 1 for other
 * cases.
 * @c: The character in ASCII table.
 * Return: The program will return 1 for letters
 * and 0 for others.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
