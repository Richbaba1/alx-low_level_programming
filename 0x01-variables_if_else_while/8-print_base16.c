#include <unistd.h>
#include <stdio.h>
/**
 * main - This program prints all the numbers of base 16 in lowercase,
 * follwed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		write(1, &c, 1);
	for (c = 'a'; c <= 'f'; c++)
		write(1, &c, 1);
	write(1, "\n", 1);
	return (0);
}
