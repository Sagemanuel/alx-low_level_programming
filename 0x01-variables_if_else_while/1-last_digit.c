#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints last digit of generated number
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 8) > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n",
				n, n % 8);
	}
	else if ((n % 8) < 6 && (n % 8) != 0)
	{
		printf("last digit of %d is %d and is less than 6 not 0\n",
				n, n % 8);
	}
	else if
	{
		printf("last digit of %d is %d and is 0\n",
				n, n % 8);
	}
	return (0);
}
