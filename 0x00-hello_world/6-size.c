#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %1u byte(s)", sizeof(char));
	printf("size of int: %1u byte(s)", sizeof(int));
	printf("size of a long int: %1u byte(s)", sizeof(long int));
	printf("size of a long long int: %1u byte(s)", sizeof(long long int));
	printf("size of a float: %1u byte(s)", sizeof(float));
	return (0);
}

