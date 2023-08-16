#include "main.h"

/**
 * print_alphabet - This will print alphabets.
 * Description: a program that prints the alphabets to the terminal.
 * Return: The program will return void after successful execution.
 */
void print_alphabet(void)
{
	int s;

	for (s = 97; s <= 122; s++)
	{
		_putchar(s);
	}

	_putchar('\n');
}
