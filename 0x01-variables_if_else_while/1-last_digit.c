#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This program assigns a random number to the
 * variable n each time it is executed.
 *
 * Return: Alwas 0 (Success)
 */
int main(void)
{
	int n, ld;/*ld means last digit*/

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	ld = n % 10;

	if (ld > 5)
	{
		printf("%d and is greater than 5\n", ld);
	}
	else if (ld == 0)
	{
		printf("%d and is 0\n", ld);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", ld);
	}
	return (0);
}
