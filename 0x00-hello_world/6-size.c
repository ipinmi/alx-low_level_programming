#include <stdio.h>
/**
 * main - Function to show the memory size of each data type
 *
 * Return: Always 0
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %i byte(s)\n", sizeof(c));
	printf("Size of an int: %i bytes(s)\n", sizeof(i));
	printf("Size of a long int: %i byte(s)\n", sizeof(li));
	printf("Size of a long long int: %i byte(s)\n", sizeof(lli));
	printf("Size of a float: %i byte(s)\n", sizeof(f));
	return (0);
}
