#include <stdio.h>

/**
 * main - print size of various type
 *
 * return: 0
 */

int main(void)
{

	printf("Size of a char: %zu byte(s)\n", sizeof(char[10]));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)", sizeof(long long int));
	printf("Size of a float: %zu byte(s)", sizeof(float));
	return (0);
}
