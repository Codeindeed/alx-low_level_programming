#include "main.h"
/**
 * print_alphabet_x10 - this prints alphabets 10x
 * Description: putchar writes answers to the screen
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int a = 0;
	int j;

	for (a <= 10; a++;)
	{
		j = 'a';
		for (j <= 'z'; j++;)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
