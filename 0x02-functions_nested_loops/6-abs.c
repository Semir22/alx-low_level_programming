#include "main.h"

/**
  * main - Entry point
  *
  * Return: Absolute value of number or 0
  */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;

		return (abs_val);
	}

	return (c);
}
