#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This is the entry point of the code.
 * Description: A program that prints the last digit of the variable, n.
 * Return: Will return 0 when the code successfully runs.
 */
int main(void)
{
	int n;
	int md;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	md = n % 10;
	if (md > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, md);
	}
	else if (md == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, md);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, md);
	}
	return (0);
}
