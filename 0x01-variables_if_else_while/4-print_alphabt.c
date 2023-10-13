#include <stdio.h>
/**
 * main - this program prints alphabets in lowwercase, followed by a new line
 * you use putchar every other function is forbidden
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q'; && c != 'e';)
			putchar(c);
			c++;
	}
	putchar('\n');
	return (0);
}
