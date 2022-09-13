#include "main.h"
/**
 *print_sign - the main entry
 *Description: prints the sign of a number
 *@n: number to compare
 *Return: always zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
