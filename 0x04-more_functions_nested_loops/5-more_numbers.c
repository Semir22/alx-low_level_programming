#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Description: Prints the numbers with _putchar
 * Return: void
 */

void more_numbers(void)
{
	int number, row;

	for (row = 1; row <= 10; row++)
	{
		for (number = 0; number <= 14; number++)
		{
			_putchar(number);
		}
		_putchar('\n');
	}
}
