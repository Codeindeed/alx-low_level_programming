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

	/*Sizeof evaluates the size of variables*/

	printf("size of a char: %lu byte(s)\n", sizeof(charType));
	printf("size of an int: %lu byte(s)\n", sizeof(intType));
	printf("size of a long int: %lu byte(s)\n", sizeof(longType));
	printf("size of a long long: %lu byte(s)\n", sizeof(longlongType));
	printf("size of a float: %lu byte(s)\n", sizeof(floatType));

	return(0);
}

