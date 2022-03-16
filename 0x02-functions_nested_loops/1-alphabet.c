#include "main.h"
/**
 * print_alphabelt - Function to print small letters
 * Description: prints alphabelt with putchar
 * Return: 0
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
