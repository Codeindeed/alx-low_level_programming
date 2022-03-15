#include "main.h"
/**
 * main - Function to print small letters:
 * Return: 0
 */

void print_alphabelt(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
