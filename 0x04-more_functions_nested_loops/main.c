#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * main -contains the whole functions
 * Return: 0
 */
int main(void)
{
	  more_numbers();
    return (0);
}

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		j = 0;

		for (j = 0; j <= 14; j++)
		{
			_putchar('0' + j);
		}
		_putchar('\n');
	}
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
