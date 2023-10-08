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

	while (c <= 'z')
		if (c != 'q' && c != 'e')
		{
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
