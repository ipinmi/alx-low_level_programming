#include "main.h"
#include <stdio.h>
/**
 * main - the entry point
 * Description: fizzbizz test
 * Return: always 0
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((num % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((num % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", num);
		}
		if (num < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
