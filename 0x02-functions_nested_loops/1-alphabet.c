#include "main.h"
/**
 * print_alphabet - print all alphabet in lower case folled by a new line
 */
void print_alphabet(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		_putchar(letters);
	}
	_putchar('\n');
}
