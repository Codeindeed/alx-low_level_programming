#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int intType;
	float floatType;
	long longType;
	char charType;
	long long longlongType;


	printf("Size of a char: %lu byte(s)\n", sizeof(charType));
	printf("Size of an int: %lu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %lu byte(s)\n", sizeof(longType));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(longlongType));
	printf("Size of a float: %lu byte(s)\n", sizeof(floatType));

	return (0);
}

