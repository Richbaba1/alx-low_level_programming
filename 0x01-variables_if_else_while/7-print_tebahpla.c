#include <stdio.h>
/**
 * main - This program prints lower case letters in reverse
 * follwwed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	{
		putchar('\n');
		return (0);
	}
}
