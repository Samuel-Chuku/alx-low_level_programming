#include <stdio.h>
/**
 * main - This is the main entry of the code
 * Description: This program will print all alphabets in lowercase.
 * Return: Will return 0 when the code is run successfully.
 */
int main(void)
{
	int n = 97;
	int s = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}

	while (s <= 90)
	{
		putchar(s);
		s++;
	}

	putchar('\n');
	return (0);
}
