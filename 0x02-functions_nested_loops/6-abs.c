#include "main.h"

/**
 * _abs - calculates the absolute value of
 * an integer.
 * @s: the integer to be computed
 * Return: will return the absolute
 * value.
 */
int _abs(int s)
{

	if (s < 0)
	{
		int abv;

		abv = s * -1;
		return (abv);
	}
	else
		return (s);
}
