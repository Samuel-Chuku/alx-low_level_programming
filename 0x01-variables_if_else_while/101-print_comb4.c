#include <stdio.h>
/**
 *main - prints all possible combinations of three  digits
 *Return: will return 0 upon successful execution of code.
 */
int main(void)
{
	int s = '0';
	int c = '0';
	int f = '0';

	while (s <= '7')
	{
		while (c <= '8')
		{
			while (f <= '9')
			{
				if (s < c && c < f)
				{
					putchar(s);
					putchar(c);
					putchar(f);
					if (!(s == '7' && c == '8' && f == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
				f++;
			}
			f = '0';
			c++;
		}
		c = '0';
		s++;
	}
	putchar('\n');
	return (0);
}
