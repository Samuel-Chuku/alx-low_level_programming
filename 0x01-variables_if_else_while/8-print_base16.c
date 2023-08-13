#include <stdio.h>

/**
 * main - The entry point of the code,
 * Description: This program prints the numbers of base 16.
 * Return: This will always be 0.
 */

int main(void)
{
	int s;
	int c;

	for (s = 48; s <= 57; s++)
	{
		putchar(s);
	}
	for (c = 97; c <= 102; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
