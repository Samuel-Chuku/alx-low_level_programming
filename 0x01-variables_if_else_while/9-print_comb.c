#include <stdio.h>

/**
 * main - The entry point of the code,
 * Description: This program prints the numbers of base 16.
 * Return: This will always be 0.
 */
int main(void)
{
	int s;

	for (s = 48; s <= 57; s++)
	{
		putchar(s);
		if (s == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
