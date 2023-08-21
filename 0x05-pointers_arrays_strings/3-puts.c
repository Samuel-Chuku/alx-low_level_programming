#include "main.h"

/**
 * _puts - This program will print a string and a new line
 * @sam: string to be printed to the terminal
 * Return: Will return the string
 */
void _puts(char *sam)
{
	while (*sam != '\0')
	{
		_putchar(*sam++);
	}
	_putchar('\n');
}
