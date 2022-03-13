#include <stdio.h>

/**
 * main - to print numbers from 1 - 10 using,
 * putchar()
 * Return: 0
 */
int main(void)
{
	int x;
	
	for (x = 0; x <= 10; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
