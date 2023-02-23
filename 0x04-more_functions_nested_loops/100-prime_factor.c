#include <stdio.h>

/**
 * main - prints the biggest prime factor of a number.
 *
 * Return: Always 0.
 */

int main(void)
{
	long num_1 = 612852475143;
	long num_2 = num_1;
	long prime = 0;

	while (--num_2)
	{
		if (num_1 % num_2 == 0)
		{
			num_2 = prime;
			break;
		}
	}
	printf("%ld\n", prime);
	return (0);
}
			
