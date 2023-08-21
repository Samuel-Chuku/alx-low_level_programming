#include "main.h"

/**
 * swap_int - This program will swaps the values of two integers
 * @a: first integer to be swapped
 * @b: second integer to be swapped
 * Return: Will return void
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
