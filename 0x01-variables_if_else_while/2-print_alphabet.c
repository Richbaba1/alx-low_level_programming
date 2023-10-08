#include <stdio.h>
/**
 * main - this program prints alphabe in lowwercase, followed by a new line
 * you use putchar every other function is forbidden
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
