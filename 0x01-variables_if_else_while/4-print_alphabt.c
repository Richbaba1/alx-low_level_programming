#include <stdio.h>
/**
 * main - this program prints alphabets in lowwercase, followed by a new line
 * you use putchar every other function is forbidden
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 97; c < 123; c++)
	{
		if (c != 101 && c != 113)
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
