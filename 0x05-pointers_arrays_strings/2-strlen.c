#include "main.h"

/**
 * _strlen - This program will return the length of a string
 * @s: string used
 * Return: Will return length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
