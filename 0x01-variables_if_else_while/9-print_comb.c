#include <stdio.h>
/**
 * main - This program prints all posibblie combinations of single-digi numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
