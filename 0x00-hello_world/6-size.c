#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %i byte(s)\n", sizeof(a));
	printf("size of an int: %i byte(s)\n", sizeof(b));
	printf("size of a long int: %i byte(s)\n", sizeof(c));
	printf("size of a long long int: %i byte(s)\n", sizeof(d));
	printf("size of a float: %i byte(s)\n", sizeof(e));
	return (0);
}

