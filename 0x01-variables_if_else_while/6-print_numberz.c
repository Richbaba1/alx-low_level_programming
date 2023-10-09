#include <stdio.h>
/**
 * main - this program prints single digits numbers in base 10
 * followed by a new line
 * you can only use putchar every other function is forbidden
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;

	for (r = 0; r < 10; r++)
	{
		putchar(r + '0');
	}
	putchar('\n');
	return (0);
}
