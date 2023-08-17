#include "main.h"

#include <stdio.h>

/**
 * print_to_98 - Program that prints all natural
 * numbers from n to 98.
 * @s: The integer to start printing from
 * Return: will return 0 upon successful execution.
 */
void print_to_98(int s)
{
	if (s <= 98)
	{
		for (; s <= 98; s++)
		{
			if (s == 98)
			{
				printf("%d", s);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", s);
			}
		}
	}
	else
	{
		for (; s >= 98; s--)
		{
			if (s == 98)
			{
				printf("%d", s);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", s);
			}
		}
	}
}
