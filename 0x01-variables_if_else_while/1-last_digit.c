#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int ld;
	ld  = n % 10;
	printf("Last digit of %d",n);
	if (ld > 5)
		printf("is %d and is greater than 5\n",ld);
	else if (ld = 0)
		printf("is %d and is 0\n",ld);
	else
		printf("is %d and is less than 6 and not 0",ld);

	return (0);
}
