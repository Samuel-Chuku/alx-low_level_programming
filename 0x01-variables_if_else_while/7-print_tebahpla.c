#include <stdio.h>
/**
 * main - This is the main entry of the code.
 * Description: This is a program that prints alphabets but in revere.
 * Return: This will return 0 upon successful execution of the program.
 */

int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}

	putchar('\n');

	return (0);
}
