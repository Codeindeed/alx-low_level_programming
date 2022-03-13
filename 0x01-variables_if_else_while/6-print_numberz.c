#include <stdio.h>

/**
 * main - to print numbers from 1 - 10 using,
 * putchar()
 * Return: 0
 */
int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
